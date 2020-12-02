// Senmon-2020_12_02 ClassTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
// Sakamaki Daiki

#include <iostream>
#include "Position.h"

int main()
{
    // Class 1
    // Position型 pos宣言
    Position pos;
    // 変数宣言し初期化
    int pos_X = 0;
    int pos_Y = 0;
    //表示
    std::cout << "X:" <<pos.ReturnPosX(pos_X) << "\n";
    std::cout << "Y:" << pos.RetrunPosY(pos_Y) << "\n";

    // Class 2

}