/**********************************************
�\�[�X�t�@�C��
�R���X�g���N�^�⃁���o�֐��̒�`���L�q����D
**********************************************/

#include <iostream>
#include <vector>
#include "class.h"

using namespace std;

//A constructor of KMeans class
KMeans::KMeans(int n_clusters, int max_epoch) {
	this->n_clusters = n_clusters;
	this->max_epoch = max_epoch;
}

//A function that performs k-means clustering on input X
void KMeans::fitData(vector<vector<double>>& X, vector<int>& label) {
	int n_data = (int)(X.size());														//Number of data
	int input_dim = (int)(X[0].size());													//Number of input dimension
	vector<vector<double>> clusters_centers(n_clusters, vector<double>(input_dim));		//Center of each cluster
	vector<vector<double>> dist_clusters_to_center(n_data, vector<double>(n_clusters));	//Distance between each data and centers of each clusters

	//Repeat the process (max_epoch) times
	for (int epoch = 0; epoch < max_epoch; epoch++) {
		//Calculating the Euclidean distance between each point and the center of each cluster
		for (int i = 0; i < n_data; i++) {
			for (int j = 0; j < n_clusters; j++) {
				for (int k = 0; k < input_dim; k++) {
					/*********************************
					�����̋L�q
					
					**********************************/
				}
			}

			//Assign each data to the cluster with the smallest Euclidean distance
			/*********************************
			�����̋L�q

			**********************************/
		}
	}
}