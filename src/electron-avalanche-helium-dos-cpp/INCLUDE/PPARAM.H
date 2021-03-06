//	   
//	       
//	     

//	   :
extern double		conc;		// concentration
extern double 		f0;		// max electric field [v/sm]
extern double 		fr; 		// frequence [MHz]
extern long int 	nc;		// number of circles
extern int		imax;		// size of arrays
extern char		file_param[];	// ฌ๏ ไ ฉซ  ฏ เ ฌฅโเฎข
extern double 		ftime;		// เฅฌ๏ แ็ฅโ  [min]

void 	print_par(); 			// ฅ็ โ์ ฏ เ ฌฅโเฎข ๏็ฅฉชจ ญ  คจแฏซฅฉ
void 	fscan_par(char*);		// โฅญจฅ ฏ เ ฌฅโเฎข ๏็ฅฉชจ จง ไ ฉซ 

//	       
const int nmas=14;			// ฎซจ็ฅแโขฎ ฌ แแจขฎข

extern double* 	xx;
extern double* 	ff;
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

extern double	x;	// sm
extern double	vx;	
extern double	er;	// eV
extern double	ss;	
extern double	sss;	

const double	kk=59.3; //v[sm/mksec]=v[sqe]*kk

extern double	ww; //2*pi*fr
extern double	dt; //1/fr/imax [mksec]
extern double	df; //2*pi/imax	
extern double	uu; //v_ampl_coleb
extern double	aa; //x_ampl_coleb [sm]

//	     

void 	read_param(); 		// C็จโ โ์ ฌ แแจข๋ จง ไ ฉซ  
void 	write_param(); 		//  ฏจแ์ ฌ แแจขฎข ข ไ ฉซ 
void 	print_param(); 		// ฅ็ โ์ ฌ แแจขฎข ญ  คจแฏซฅฉ