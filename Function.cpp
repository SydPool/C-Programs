#include <iostream>

void lyricalSong(std::string song, int awards);


int main(){

    std::string song = "FuckemAll";
    int awards = 10;

    lyricalSong(song, awards);


    return 0;

}

void lyricalSong(std::string song, int awards){

    std::cout<<"Name of the song "<< song<<'\n';
    std::cout<<"No. of awards "<< awards<<'\n';

}

