/**********************************************
ヘッダファイル
クラスの宣言をここで行う．
関数に対するコメントの記述もここで行う．
**********************************************/

#pragma once

#include <iostream>
#include <vector>

using namespace std;

//クラス名は大文字始まり，単語の区切りは各単語の先頭を大文字に
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

	//関数名は小文字始まり，単語の区切りは各単語の先頭を大文字に
	//@brief A function that performs k-means clustering on input X
	//@param [in] X(vector<vector<double>>) Input data
	//@param [out] label(vector<int>) Label of the cluster to which the input data belongs
	//@par Update history
	//	- 2021/09/24 Implementation of basic functions (by Tsubasa NISHIHARA)
	//	- 2021/09/27 Fixing XXXX (by Tsubasa NISHIHARA)
	void fitData(vector<vector<double>>& X, vector<int>& label);
};
