int ��մ�(Str &str)
{
	if(str.ch)				//�����������ֵ
	{
		free(str.ch);		//�ͷ�
		str.ch=NULL;		
	}
	str.length=0;			//���ĳ���Ϊ0
	return 1;				//�ɹ�
}