int ���Ƚ�(Str s1,Str s2)						//���������� s1��s2
{
	for(int i=0;i<s1.length&&i<s2.length;++i)	//s1��s2��С�Ĵ�
		if(s1.ch[i]!=s2.ch[i])					//s1��s2��һ���ַ�����ʱ
			return s1.ch[i]-s2.ch[i];			//���� s1��һ���ַ���ASC���ȥs2�ĵ�һ���ַ���ASC�� ���Ϊ��������s1����s2��
		return s1.length-s2.length;				//Ϊ0 s1=s2;Ϊ�� s1>s2;Ϊ�� s1<s2
}