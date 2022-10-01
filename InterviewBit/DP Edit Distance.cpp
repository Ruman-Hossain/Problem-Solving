int dp[451][451];
string strA, strB;

int editDistance(int i, int j) {
    if (i == strA.size()) {
        return strB.size() - j;
    }	
    if (j == strB.size()) {
        return strA.size() - i;
    }
    int &ret = dp[i][j];
    if (~ret) {
        return ret;
    }
    ret = 1e9;
    if (strA[i] == strB[j]) {
        ret = min(ret, editDistance(i + 1, j + 1));
    } else {
        int insert = 1 + editDistance(i, j + 1);
        int delet = 1 + editDistance(i + 1, j);
        int replace = 1 + editDistance(i + 1, j + 1);
        ret = min(ret, min(insert, min(delet, replace)));
    }
    return ret;
}

int Solution::minDistance(string A, string B) {
    strA=A, strB=B;
    memset(dp, -1, sizeof dp);
	return editDistance(0, 0);
}