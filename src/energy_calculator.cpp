#include "generator.h"
#include "gen_consts.h"

#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace energy_generator;

bool compGenSpace(Generator g1, Generator g2){
    return (g1.getSpace() < g2.getSpace());
}

int getCombSpace(std::map<int,int> comb, Generator genList[], int genCount){
    std::map<int,int>::iterator it;
    int space = 0;
    for(int i = 0; i < genCount; i++){
        it = comb.find(genList[i].getId());
        if(it != comb.end()){
            space += genList[i].getSpace();
        }
    }
    return space;
}

int getCombHeat(std::map<int,int> comb, Generator genList[], int genCount){
    std::map<int,int>::iterator it;
    int space = 0;
    for(int i = 0; i < genCount; i++){
        it = comb.find(genList[i].getId());
        if(it != comb.end()){
            space += genList[i].getHeat();
        }
    }
    return space;
}

std::string map_to_str(std::map<int,int> myMap){
    std::map<int,int>::iterator it;
    std::string myStr = "{ ";
    bool first = true;
    for(auto& x: myMap){
        if(first){
            myStr += std::to_string(x.first) + ": " + std::to_string(x.second);
            first = false;
        }
        myStr += ", " + std::to_string(x.first) + ": " + std::to_string(x.second);
    }
    return myStr + " }";
}

int main(){
    std::vector<std::map<int, int>> combs[GEN_CONSTS::LENGTH];
    for(int i = 0; i < GEN_CONSTS::LENGTH; i++){
        combs[i].push_back(std::map<int, int>());
    }
    std::vector<std::map<int, int>> goodCombs;
    for (int i = 0; i < GEN_CONSTS::LENGTH; i++)
    {
        std::cout << GEN_CONSTS::GEN_LIST[i].to_string() << std::endl;
        //std::cout << "Hello, World!" << std::endl;
    }
    std::sort(GEN_CONSTS::GEN_LIST, GEN_CONSTS::GEN_LIST+GEN_CONSTS::LENGTH, compGenSpace);
    int genStart = 0;
    for(int i = 0; i < GEN_CONSTS::MAX_SPACE; i++){
        std::vector<std::map<int, int>> newCombs[GEN_CONSTS::LENGTH];
        for(int j = 0; j < GEN_CONSTS::LENGTH; j++){
            for(int k = 0; k < combs[j].size(); k++){
                std::map<int,int> currComb = combs[j].at(k);
                for(int l = j; l < GEN_CONSTS::LENGTH; l++){
                    if(l < genStart) continue;
                    std::map<int,int> newComb = std::map<int,int>(currComb);
                    std::map<int,int>::iterator it = newComb.find(GEN_CONSTS::GEN_LIST[j].getId());
                    if(it != newComb.end()){
                        newComb.at(GEN_CONSTS::GEN_LIST[j].getId())++;
                    }else{
                        it = newComb.begin();
                        newComb.insert(it, std::pair<int, int>(GEN_CONSTS::GEN_LIST[j].getId(), 1));
                    }
                    newCombs[j].push_back(newComb);
                }
            }
        }
        for (size_t j = 0; j < GEN_CONSTS::LENGTH; j++)
        {
            std::cout << j << ". ";
            for (size_t k = 0; k < newCombs[j].size(); k++)
            {
                std::cout << map_to_str(newCombs[j].at(k)) << std::endl;
            }
        }
        // TODO: filter overfilled, full, not full
        std::vector<std::map<int, int>> combs[GEN_CONSTS::LENGTH];
        bool pushStart = false;
        for(int j = 0; j < GEN_CONSTS::LENGTH; j++){
            for(int k = 0; k < newCombs[j].size(); k++){
                if(getCombSpace(newCombs[j].at(k), GEN_CONSTS::GEN_LIST, GEN_CONSTS::LENGTH) < GEN_CONSTS::MAX_SPACE){
                    combs[j].push_back(newCombs[j].at(k));
                }else if(getCombSpace(newCombs[j].at(k), GEN_CONSTS::GEN_LIST, GEN_CONSTS::LENGTH) == GEN_CONSTS::MAX_SPACE){
                    if (getCombHeat(newCombs[j].at(k),GEN_CONSTS::GEN_LIST, GEN_CONSTS::LENGTH) <= GEN_CONSTS::MAX_HEAT)
                    {
                        goodCombs.push_back(newCombs[j].at(k));
                    }
                }else{
                    if(pushStart) continue;
                    if (newCombs[j].at(k).size() == 1)
                    {
                        pushStart = true;
                    }
                }
            }
        }
        if(pushStart){
            genStart++;
        }
    }
    /*for (size_t i = 0; i < goodCombs.size(); i++)
    {
        std::cout << map_to_str(goodCombs.at(i)) << std::endl;
    }*/
    
}
