#include <vector>
#include <stdexcept>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix multiplyMatrices(const Matrix& m1, const Matrix& m2) {

    if (m1[0].size()!=m2.size()) throw invalid_argument("nao e possivel multiplicar");

    Matrix result(m1.size(),vector<int>(m2[0].size(),0));

    for(int i=0;i<m1.size();i++) for(int j=0;j<m2[0].size();j++) for(int k=0;k<m1[0].size();k++) result[i][j] += m1[i][k]*m2[k][j];

    return result;
}
