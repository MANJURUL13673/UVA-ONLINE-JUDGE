#include <stdio.h>
#include <string.h>

int main() {
	int r, n,i;
	char x[80],c;
	int count = 0;

	while (scanf("%d%d%c",&r,&n,&c), r || n) {
		count++;

		double price = 2000000000, p;
		int reqMet = -1, rm;
		char name[80], nam[80];

		for (i = 0; i < r; i++) {
			gets(x)
		}

		while (n--) {
			gets(nam);
			scanf("%lf %d\n", &p, &rm);
			if (rm > reqMet) {
				reqMet = rm;
				strcpy(name,nam);
				price = p;
			} else if (rm == reqMet && p < price) {
				reqMet = rm;
				strcpy(name,nam);
				price = p;
			}

			for (i = 0; i < rm; i++) {
				gets(x);
			}
		}

		if (count > 1)
			cout << endl;
		cout << "RFP #" << count << endl;
		cout << name << endl;
	}

	return 0;
}
