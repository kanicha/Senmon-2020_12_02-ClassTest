// Sakamaki Daiki
#pragma once
class Medical
{
private:
	// �e�ϐ��錾
	int medicalNum = 0;
	int high = 0;
	int weight = 0;
private:
	// �e�Q�b�^�[�A�Z�b�^�[�錾
	int GetMedicalNum() { return medicalNum; }
	void SetMedicalNum(int num) { num = medicalNum; }
	int GetHigh() {return high; }
	void SetHigh(int high) { high = this->high; }
	int GetWeight() {return weight; }
	void SetWeight(int weight) { weight = this->weight; }
	// BMI�v�Z�֐��錾
	float BMINum(float num);
};

