/**********************************************
�w�b�_�t�@�C��
�N���X�̐錾�������ōs���D
�֐��ɑ΂���R�����g�̋L�q�������ōs���D
**********************************************/

#pragma once

#include <iostream>
#include <vector>

using namespace std;

//�N���X���͑啶���n�܂�C�P��̋�؂�͊e�P��̐擪��啶����
class KMeans {
private:
	int n_clusters;	//Number of clusters
	int max_epoch;	//Max epochs

public:

	//@brief A constructor of KMeans class
	//@param [in] n_clusters(int) Number of clusters
	//@param [in] max_epoch(int) Max epochs
	//@return None
	//@attention The input argument must be an int type.
	//@par Update history
	//	-2021/09/24 Implementation of basic functions (by Tsubasa NISHIHARA)
	KMeans(int n_clusters, int max_epoch);

	//�֐����͏������n�܂�C�P��̋�؂�͊e�P��̐擪��啶����
	//@brief A function that performs k-means clustering on input X
	//@param [in] X(vector<vector<double>>) Input data
	//@param [out] label(vector<int>) Label of the cluster to which the input data belongs
	//@par Update history
	//	- 2021/09/24 Implementation of basic functions (by Tsubasa NISHIHARA)
	//	- 2021/09/27 Fixing XXXX (by Tsubasa NISHIHARA)
	void fitData(vector<vector<double>>& X, vector<int>& label);
};
