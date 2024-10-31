#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	double l[n], r[n];
	double Stp = 0;
	double cmax = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%lf%lf",&l[i],&r[i]);
		Stp += l[i]*r[i];
		if (cmax < l[i]*r[i]) cmax = l[i]*r[i];
	}
	Stp = Stp/n;
	printf("%.3lf\n%.3lf",Stp,cmax);
}