const int ALP_SIZE = 26;

bool isLower(char ch) {
	return ch >= 'a' && ch <= 'z';
}

void fill(int hist[ALP_SIZE], char* result) {
	int i = 0;

	while (*result != '\0') {
		while (hist[i] > 0) {
			*result = i + 'a';
			++result;
			--hist[i];
		}
		++i;
	}
}

char* sortedLowerLetters(const char* text) {
	
	int hist[ALP_SIZE] = { 0 };
	int counter = 0;

	while (*text != '\0') {
		if (isLower(*text)) {
			int index = *text - 'a';
			hist[index]++;
			counter++;
		}
		++text;
	}

	char* result = new char[counter + 1];
	result[counter] = '\0';
	fill(hist, result);
	return result;
}

int main()
{
	char* res = sortedLowerLetters("AacBbbWb");
	std::cout << res;
	delete[] res;
}
