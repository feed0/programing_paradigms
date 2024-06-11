#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix sumMatrices(const Matrix& m1, const Matrix& m2) {
    Matrix result(m1.size(),vector<int>(m1[0].size(),0));

    for (int i=0;i<m1.size();i++) for(int j=0;j<m1[0].size();j++) result[i][j] = m1[i][j]+m2[i][j];

    return result;
}