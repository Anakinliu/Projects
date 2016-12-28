double score(double s[], int n,double *p1,double *p2)
{
	//p1 shi he,p2 shi jun zhi. 
	int i = 0;
	double sum=0.0,ave=0.0;
	
	for (; i < n; i++)
		sum += s[i];
	ave = sum / n;
	*p1 = sum;
	
	*p2 = ave;

}