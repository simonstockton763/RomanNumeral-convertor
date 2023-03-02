#include "roman_numerals.h"

namespace roman_numerals {
    
         std::string  convert(int dec){
           std::string  roman = "";
        for (int i= 0; i < dec/1000; i++ ){
            roman += "M";
        }
        if (dec%1000 >= 900){
            roman += "CM" + penturies(dec%100);
        }
        else{
            roman+=penturies(dec%1000);
        }
        return roman;
    }
         std::string  penturies (int dec){
           std::string  fivehundreds = "";
        for (int i= 0; i < dec/500; i++ ){
            fivehundreds += "D";
        }
        if (dec%500 >= 400){
            fivehundreds += "CD" + centuries(dec%100)  ;
        }
        else{
            fivehundreds+=centuries(dec%500);
        }
        return fivehundreds;
    }
         std::string  centuries (int dec){
           std::string  hundreds = "";
        for (int i= 0; i < dec/100; i++ ){
            hundreds += "C";
        }
        if (dec%100 >= 90){
            hundreds += "XC"+ pentecostades(dec%10)  ;
        }
        else{
            hundreds+=pentecostades(dec%100);
        }
        return hundreds;
    }

         std::string  pentecostades (int dec){
           std::string  fifties = "";
        for (int i= 0; i < dec/50; i++ ){
            fifties += "L";
        }
        if (dec%50 > 40){
            fifties += "XL" + decades(dec%10);
        }
        else{
            fifties+=decades(dec%50);
        }
        return fifties;
    }
         std::string  decades (int dec){
           std::string  tens = "";
        for (int i= 0; i < dec/10; i++ ){
            tens += "X";
        }
        if (dec%10 == 9){
            tens += "IX";
        }
        else{
            tens+=pentads(dec%10);
        }
        return tens;
    }

         std::string  pentads (int dec){
           std::string  fives ="";
        for (int i= 0; i < dec/5; i++ ){
            fives += "V";
        }
         if (dec%5 == 4){
            fives += "IV";
        }
        else{
            fives+=singles(dec%5);
        }
        return fives;
    }
         std::string  singles (int dec){
           std::string  ones = "";
            for (int i= 0; i < dec; i++ ){
                ones += "I";
            }    
        return ones;}
}
  // namespace roman_numerals
