// Sakamaki Daiki
#pragma once
class Medical
{
private:
	// 各変数宣言
	int medicalNum = 0;
	int high = 0;
	int weight = 0;
private:
	// 各ゲッター、セッター宣言
	int GetMedicalNum() { return medicalNum; }
	void SetMedicalNum(int num) { num = medicalNum; }
	int GetHigh() {return high; }
	void SetHigh(int high) { high = this->high; }
	int GetWeight() {return weight; }
	void SetWeight(int weight) { weight = this->weight; }
	// BMI計算関数宣言
	float BMINum(float num);
};

