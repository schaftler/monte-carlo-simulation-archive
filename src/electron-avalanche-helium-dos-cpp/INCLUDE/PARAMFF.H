//	���������� ���������� ������������� ������
//	� �������� ���������� ��� ����� ���������� ����������� �����
//	���������� ������� ��� ������ � ���������

//	���������� ���������� ������������� ������:
extern double 		voltage;	// ����殮���.
extern double 		dk; 		// ����� ���� ��⮤���� �������
extern double 		field;		// �������᪮� ����. 
extern double 		dd; 		// ����� ����ࠧ�來��� �஬���⪠
extern long int 	nstat;		// ������⢮ ������᪨� �����஭��	
extern char		file_param[];	// ��� 䠩�� ��ࠬ��஢
extern long int 	ilav;		// ������⢮ �����஭��� �����
extern long int 	istat;		// ����騩 ����� ������᪮�� �����஭�	
extern double 		ftime;		// �६� ���

void 	print_par(); 			// ����� ��ࠬ��஢ �祩�� �� ��ᯫ��
void 	fscan_par(char*);		// �⥭�� ��ࠬ��஢ �祩�� �� 䠩��	

//	���������� �������� ���������� ��� ����� ���������� ����������� �����
const int 	imax=20;		// ��᫮ ࠧ������ �஬���⪠
const int 	imax1=imax+1;
const int	nmas=16;		// ������⢮ ���ᨢ��
const int	frem=14;		// ���c����쭠� vx � vr ��� ���(vx,vr)
const int 	fremax=frem*(frem+frem-1);

extern double* 	xx;
extern double* 	ff;
extern double*	de;
extern double* 	mm;
extern double* 	vvx;		
extern double* 	vvd;		
extern double* 	vvr;
extern double* 	vvv;		
extern double* 	eex;		
extern double* 	eer;		
extern double* 	eee;
extern double* 	evx;	
extern double* 	fto;
extern double* 	fel;
extern double* 	fex;	
extern double* 	fio;	
extern double huge*  fre;

//	���������� ������� ��� ������ � ���������
void 	read_param(); 		// C���� ���ᨢ� �� 䠩�� 
void 	write_param(); 		// ������ ���ᨢ�� � 䠩� 
void 	print_param(); 		// ����� ���ᨢ�� �� ��ᯫ�� 

double	xtoe(int,double);
double	etox(int,double);
double	etof(int,double);