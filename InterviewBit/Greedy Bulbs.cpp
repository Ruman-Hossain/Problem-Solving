int Solution::bulbs(vector<int> &bulbsState) {
	int press = 0;
	bool curState = 0;
	for (int state : bulbsState) {
	if (curState ^ state) {
	continue;
} else {
	curState ^= 1;
	press++;
}
}
return press;
}
