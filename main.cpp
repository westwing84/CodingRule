/**********************************************
コーディング規約テンプレ

1. コメントには原則//表記を用いる．
2. コメントは英語で書く
3. 関数名は小文字で始める．複数の単語で構成される場合は先頭の単語以外の頭文字を大文字にする．(例：int calcMean)
4. 変数名は変数の意味が理解できる名前にする．ただし，カウンタなど，変数そのものに意味のないものは除く．
5. 変数名は小文字で始める．複数の単語で構成される場合，単語の区切りに"_"(アンダーバー)を用いる．(例：num_data)
6. クラス名は大文字で始める．複数の単語で構成される場合は先頭の単語以外の頭文字を大文字にする．(例：class MyClass)

(cf)#pragma regionを用いることでコードの折り畳みが可能．適切に用いることによりコードの可読性が向上する．

**********************************************/

#include <iostream>
#include <vector>
#include <string>
#include "class.h"

using namespace std;


int main() {

#pragma region Declaring variables
	//Declaring variables (変数名は小文字，単語間は"_"で区切る)
	int max_iter = 10;					//Max epochs
	int n_clusters = 3;					//Number of clusters
	vector<vector<double>> x;			//Array to store the reading data.
#pragma endregion


	/**********************************************
	main関数の処理の記述
	
	***********************************************/
	

	return 0;
}
