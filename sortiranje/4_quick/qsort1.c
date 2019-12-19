void razmeni(int *a, int *b)
{
	int pom = *a;
	*a = *b;
	*b = pom;
}

void quick_sort(double *niz, int leva, int desna)
{
	if (leva >= desna)
		return;
		
	// bilo koji broj izmedju levog i desnog
	double pivot = niz[leva];
	
	int i = leva+1; //brojac sa levog kraja
	int j = desna; //brojac sa desnog kraja
	
	while (i <= j) 
	{
		if (niz[i] > pivot && niz[j] <= pivot)
		{
			razmeni(&niz[i], &niz[j]);
			i++;
			j--;
		} 
		else 
		{
			if (niz[i] <= pivot)
				i++;
			if (niz[j] > pivot)
				j--;
		}
	}
	
	razmeni(&niz[leva], &niz[j]);
	quick_sort(niz, leva, j-1);
	quick_sort(niz, i, desna);
}
