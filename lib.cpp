//
// Created by Lorenzo Latona Schettini on 06/12/2022
//


bool convert(char &x){
    if(x >= 65 && x <= 90){
        x += 32;
        return true;
    }else if(x >= 97 && x <= 122){
        x -= 32;
        return true;
    }
    return false;
}
