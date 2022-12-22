
/* bt1
int n, i = 0 , S = 0, t;
	printf("nhap n: ");
	cin >> n;


	while ( i < n )
	{
		i++;
		t = S + i;
		S = t;
	}

	cout << "S(" << n << ") = " <<  t;


	return 0;
	*/

void dongho()
{
	int gio, phut, giay;
	giay = 0, gio = 0, phut = 0;
	while (true)
	{

		giay++;

		if (gio < 10)
			cout << "0";
		cout << gio << ":";
		if (phut < 10) cout << "0";
		cout << phut << ":";
		if (giay < 10) cout << "0";
		cout << giay;
		if (giay == 60)
		{
			phut = phut + 1;
			giay = 0;
		}

		if (phut == 60)
		{
			gio = gio + 1;
			phut = 0;
		}

		if (gio == 24)
		{
			gio = 0;
		}

		Sleep(1000);
		system("cls");


	}
}


void sizeofbien()
{
	printf("xem size cua tung name khai bao bien\n");
	std::cout << "size cua int la: " << sizeof(int) << " mb\n";
	std::cout << "size cua float la: " << sizeof(float) << " mb\n";
	std::cout << "size cua long la: " << sizeof(long) << " mb\n";
	std::cout << "size cua char la: " << sizeof(char) << " mb\n";

}






void vehinhvuong()
{
int no;
int yes;
int luachon;
printf("ban ve hinh vuong ko (yes/no) : ");
std::cin >> luachon;
yes = 0, no = 1;
if (luachon == yes)
{
	goto vehinhvuong;
}
else if (luachon == no)
{
	goto exit;
}
else
{
	printf("sai roi b oiii :33");
}

vehinhvuong:
{
	system("cls");
	printf("ve hinh vuong nao ^^\n");
	printf("\t*______________________*\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t|                     |\n");
	printf("\t*______________________*\n");
}

exit:
 {
	system("exit");
 }
}







/*
//baitap tính khoảng cách giữa 2 thời gian khi nhập 2 thời điểm vào và tính khoảng cách;-;
	//khai báo biến
	int gio, phut, giay;
	int gio2, phut2, giay2;
	int thoigian;

	//nhapdulieuu 1
	std::cout << "\t nhap du lieu thoi gian 1 \n";
	std::cout << "\tnhap thoi gian(gio): ";
	std::cin >> gio;
	std::cout << "\tnhap thoi gian(phut): ";
	std::cin >> phut;
	std::cout << "\tnhap thoi gian(giay): ";
	std::cin >> giay;

	// công thức nè
	thoigian = 3600 * gio + 360 * phut + giay;

	std::cout << "\t nhap du lieu thoi gian 2 \n";
	std::cout << "\tnhap thoi gian(gio): ";
	std::cin >> gio2;
	std::cout << "\tnhap thoi gian(phut): ";
	std::cin >> phut2;
	std::cout << "\tnhap thoi gian(giay): ";
	std::cin >> giay2;

	//công thức 2 nha
	int thoigian2 = 3600 * gio2 + 360 * phut2 + giay2;

	if (thoigian < thoigian2) {
		std::cout << "khoang cach cua ca 2 la: " << thoigian2 - thoigian << "giay";
		std::cout << "\ntuong duong voi: " << gio2 - gio << "h " << phut2 - phut << "p " << giay2 - giay << "s ";
	}
	else if (thoigian > thoigian2) {
		std::cout << "khoang cach cua ca 2 la: " << thoigian - thoigian2 << "giay";
		std::cout << "\ntuong duong voi: " << gio - gio2 << "h " << phut - phut2 << "p " << giay - giay2 << "s ";
	}
	else if (thoigian == thoigian2) std::cout << "khoang cach cua ca 2 la bang 0";
	else
	{
		printf("voli nha:v");
	}

	return 0;
 ======================================================================================================================================
	using namespace std;
	printf("  May tinh phep nhan mo phong phep nhan");
	int a, b, a1, a2, a3, p1, p2, p3;
	printf("\n a: ");
	cin >> a;
	printf("\n b: ");
	cin >> b;
	a1 = b % 10;
	a2 = (b / 10) % 10;
	a3 = (b / 100) % 10;
	p1 = a1 * a;
	p2 = a2 * a;
	p3 = a3 * a;
	system("cls");
	printf("  mo phong phep nhan tay\n\n");
	std::cout << "\t " << a;
	std::cout << "\n      x\n";
	std::cout << "\t " << b;
	std::cout << "\n   -----------\n ";
	std::cout << "       " << p1;
	std::cout << "\n       " << p2;
	std::cout << "\n      " << p3;
	std::cout << "\n   -----------\n ";
	std::cout << "     " << a * b;

======================================================================================================================================
























*/

/*  https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_vong_lap_trong_cplusplus_1.jsp
int a;
	printf("nhap so nguyen: ");
	std::cin >> a;
	for (int b = 1; b <= 15; b++)
	{
		int nhan = a * b;
		std::cout << a << " x " << b << " = " << nhan << "\n";
	}

*/

/*  https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_if_else_trong_cplusplus_8.jsp
float a; // lương
	printf("nhap luong cua nhan vien(don vi tien trieu): ");
	std::cin >> a;
	if (a < 7) // khối lệnh này được thực thi nếu condition1 = true
	{
		float thue;
		thue = (a * 10) / 100;
		std::cout << "\nthue thu nhap la: " << thue <<"tr";
		float tnd = a - thue;
		std::cout << "\nso tien ban nhan dc la: " << tnd << "tr";
	}
	else if ((a > 7) && (a < 15))
	{
		float thue;
		thue = (a * 20) / 100;
		std::cout << "\nthue thu nhap la: " << thue << "tr";
		float tnd = a - thue;
		std::cout << "\nso tien ban nhan dc la: " << tnd << "tr";
	}
	else if (a >= 15)
	{
		float thue;
		thue = (a * 30) / 100;
		std::cout << "\nthue thu nhap la: " << thue << "tr";
		float tnd = a - thue;
		std::cout << "\nso tien ban nhan dc la: " << tnd <<"tr";
	}

	system("pause");
	return 0;
*/


/*   https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_if_else_trong_cplusplus_6.jsp
float a, b, c, dthu;
    printf(" < 100 = 5% , <=300 = 10 , >300 = 20% ");
	printf("nhap doanh thu thang nay: ");
	std::cin >> dthu;


	if (dthu <= 100)
	{
		float hoahong = (dthu * 5) / 100;
		std::cout << hoahong << "tr";
	}
	else if (dthu <= 300)
	{
		float hoahong = (dthu * 10) / 100;
		std::cout << hoahong << "tr";
	}
	else if (dthu > 300)
	{
		float hoahong = (dthu * 20) / 100;
		std::cout << hoahong << "tr";
	}
	return 0;


*/


/*
int main()
{
	float a, b, c, x;
	printf("\tax^2 + bx + c = 0\n");
	printf("a: ");
	std::cin >> a;
	printf("b: ");
	std::cin >> b;
	printf("c: ");
	std::cin >> c;
	float cb = -c / b;
	float delta = (b * b) - 4 * a * c; // ki hieu delta 🔺 
	float delta1 = ((-b) + sqrt(delta)) / 2 * a; //  sqrt là căn bậc 2
	float delta2 = ((-b) - sqrt(delta)) / 2 * a; //  sqrt là căn bậc 2

	if ((a == 0) && (b == 0))
	{
		std::cout << "pt vo nghiem";
	}
	if (a == 0)
	{
		std::cout << "pt co nghiem la" << cb;
	}
	else if (delta < 0)
	{
		std::cout << "pt vo nghiem ";
	}

	else if (delta > 0)
	{
		std::cout << "pt co 2 nghiem: \n";
		std::cout << "x1: " << delta1;
		std::cout << "\tx2: " << delta2;
	}
	
	
	return 0;
	
}
*/




/*   https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_if_else_trong_cplusplus_4.jsp
	float a, b, c; // diem ktra, diem thi giua ky` va diem thi cuoi ky
	printf("nhap thong so lan luot la:\n");
	printf("diem ktra, diem thi giua ky` va diem thi cuoi ky`\n");
	std::cin >> a >> b >> c;
	float tb = (a + b + c) / 3;
	if (tb >= 9.0) // hang A
	{
		std::cout << "diem trung binh cua ban la: " << tb;
		std::cout << "\nban da dat hang A, xin chuc mung !!! \n";
	}
	else if ((tb < 9.0) && (7.0 <= tb)) // hang B
	{
		std::cout << "diem trung binh cua ban la: " << tb;
		std::cout << "\nban da dat hang B, co len nhe !!! \n";
	}
	else if ((a >= 5.0 ) && ( a < 7.0 )) // hang C
	{
		std::cout << "diem trung binh cua ban la: " << tb;
		std::cout << "\nban da dat hang C, can co co gang !!! \n";
	}
	else if ( tb < 5.0) // hang F
	{
		std::cout << "diem trung binh cua ban la: " << tb;
		std::cout << "\nban o hang F, can co co gang\n";
	}
	else
	{
		std::cout << "ko co ket qua !!!";
	}
	system("pause");
	return 0;

*/

/*	int a, b, c; https://vietjack.com/bai_tap_cplusplus_co_giai/tim-gia-tri-lon-nhat-trong-cplusplus.jsp
	printf("nhap 3 so nguyen: \n");
	std::cin >> a >> b >> c;
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	std::cout << "\n" << "gia tri lon nhat la: " << max;
	return 0;

*/


/* https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_if_else_trong_cplusplus_2.jsp
	int a;
	printf("nhap so nguyen: ");
	std::cin >> a;
	if (a < 100)
	{
		printf("\n so nguyen nho hon 100");
	}
	if (a > 100)
	{
		printf("\n sp nguyen lon hon 100");
	}
	if (a == 100)
	{
		printf(" so nguyen la 100");
	}
*/


/*	https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_if_else_trong_cplusplus_1.jsp
    int a;
	printf("so tuoi cua ban la: ");
	std::cin >> a;
	std::cout << "\nban dang o " << a << " tuoi\n";
	if (a > 15)
	{
		printf("ban du dieu kien vao lop 10");
	}
	
	else
	{
		printf("ban ko du dieu kien vao lop 10");
	}
*/




/* https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_toan_tu_trong_cplusplus_8.jsp
	float x, y;
	printf("nhap x: ");
	std::cin >> x;
	printf("\nnhap y: ");
	std::cin >> y;
	float p = x * y, s = x + y;
	float q = (s * s) + p * (s - x) * (p * y);
	printf("q=s2+p(s-x)*(p+y)");
	std::cout << "\ngia tri cua bieu thuc la: " << q;
*/

/* baitap https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_toan_tu_trong_cplusplus_7.jsp

float a, b, c, d,cuoiki;

	printf("\n=======Diem kiem tra===============\n");
	printf("\nNhap diem kiem tra 1: ");
	std::cin >> a;
	printf("\nNhap diem kiem tra 2: ");
	std::cin >> b;
	printf("\nNhap diem kiem tra 3: ");
	std::cin >> c;
	float tongdiemktra = (a + b + c);
	printf("\n=======Diem thi giua ky==============\n");
	printf("\nNhap diem thi giua ky: ");
	std::cin >> d;
	printf("\n=======Diem thi cuoi ky=================\n");
	printf("\nNhap diem thi cuoi ky: ");
	std::cin >> cuoiki;
	std::cout << "\nTong diem kiem tra: " << tongdiemktra;
	std::cout << "\nDiem thi giua ky: " << d;
	std::cout << "\nDiem thi cuoi ky: " << cuoiki << "\n\n";
	std::cout << "...........\n\n";
	std::cout << "Tong diem: " << tongdiemktra + d + cuoiki << std::endl;
	system("pause");
	return 0;

*/


/* baitap https://vietjack.com/bai_tap_cplusplus_co_giai/toan-tu-tang-toan-tu-giam-trong-cplusplus-6.jsp
int x = 5;
	using namespace std;
	cout << "gtri ban dau" << "\tbieuthuc" << "\tgtri" <<"\t\tgtri sau\n";
	cout << "cua x" << "\t\t\t\tbieuthuc" << "\tcua x\n\n";
	cout << x << "\t\t|x++\t|\t" << x << "\t\t|" << "x=" << x+1 << "\n";
	cout << x << "\t\t|x--\t|\t" << x << "\t\t|" << "x=" << x - 1 << "\n";
	cout << x-1 << "\t\t|++x\t|\t" << x << "\t\t|" << "x=" << ++x << "\n";
	cout << x-1 << "\t\t|--x\t|\t" << x-2 << "\t\t|" << "x=" << x-2;
	return 0;
*/



/* chia tien cho moi nguoi ^-^
float a;
	float sl;
	using namespace std;
	printf("hien tai ban dang co so tien la?: ");
	cin >> a, cout << "k";
	
	printf("\n ban muon chia tien cho may nguoi? ( 10 ng tro xuong )\n");
	printf(" tra loi: ");
	cin >> sl;
	if ( sl == 2 )
	{
		float ct = a / 2;
		cout << ct <<"k";
	}
	if (sl == 2)
	{
		float ct = a / 2;
		cout << ct << "k";
	}
	if (sl == 4)
	{
		float ct = a / 4;
		cout << ct << "k";
	}
	if (sl == 5)
	{
		float ct = a / 5;
		cout << ct << "k";
	}
	if (sl == 6)
	{
		float ct = a / 6;
		cout << ct << "k";
	}
	if (sl == 7)
	{
		float ct = a / 7;
		cout << ct << "k";
	}
	if (sl == 8)
	{
		float ct = a / 8;
		cout << ct << "k";
	}
	if (sl == 9)
	{
		float ct = a / 9;
		cout << ct << "k";
	}
	if (sl == 10)
	{
		float ct = a / 10;
		cout << ct << "k";
	}
	else
	{
		printf("sai roi ban oi");
	}
	return 0;
	*/

	/* https://vietjack.com/bai_tap_cplusplus_co_giai/bai_tap_toan_tu_trong_cplusplus_4.jsp
	* 
	* in gia tri va bieu thuc
	* 
	using namespace std;
	int x;
	int y;
	
	printf("x: ");
	cin >> x;
	printf("y: ");
	cin >> y;

	std::cout << "Ket qua tra ve:\n";
	cout << "Gtri x\t" << "Gtri y\t" << "Bieu thuc\t" << "Ket qua\n";
	cout << x << " |\t" << y << " |\t" << "x=y+3\t" << "\t|" << "x=" << y + 3 << "\n";
	cout << x << " |\t" << y << " |\t" << "x=y-2\t" << "\t|" << "x=" << y - 2 << "\n";
	cout << x << " |\t" << y << " |\t" << "x=y*5\t" << "\t|" << "x=" << y * 5 << "\n";
	cout << x << " |\t" << y << " |\t" << "x=x/y\t" << "\t|" << "x=" << (float)(x / y) << "\n";
	cout << x << " |\t" << y << " |\t" << "x=x%y\t" << "\t|" << "x=" << x % y << "\n";

	system("PAUSE");
	return EXIT_SUCCESS;
	*/

/* baitap https://vietjack.com/bai_tap_cplusplus_co_giai/bai-tap-toan-tu-trong-cplusplus-3.jsp 
* 
* tính vận tốc cuối cùng
* 
	float u; // vận tốc
	float a; // gia tốc
	float t; // thời gian

	printf(" nhap so lieu lan luot la: \n");
	printf("    van toc: ");
	std::cin >> u;
	printf("    gia toc: ");
	std::cin >> a;
	printf("    thoi gian: ");
	std::cin >> t;

	float v; // vận tốc ban đầu
	v = u + a * t;

	printf("van toc cuoi cung la: ");
	std::cout << v;
	*/

/* baitap https://vietjack.com/bai_tap_cplusplus_co_giai/tim-tong-va-trung-binh-cua-hai-so-trong-cplusplus.jsp
* 
* tính tổng và trung bình của 2 ẩn
* 
	float a, b;
	printf("a: ");
	std::cin >> a;
	printf("b: ");
	std::cin >> b;

	float trungbinh = (a + b) / 2;
	float tong = a + b;

	printf("tong cua a va b la: ");
	std::cout << tong;
	printf("\ntrung binh a va b la: ");
	std::cout << trungbinh;


	return 0;

	*/

/* bai tap : https://vietjack.com/bai_tap_cplusplus_co_giai/tim-tong-va-trung-binh-cua-hai-so-trong-cplusplus.jsp
* 
* tính tổng tích thương hiệu
* 
	float a = 5;
	float b = 5;
	float thuong;

	int tong = a + b;
	int hieu, tich;
	hieu = a - b;
	thuong = a / b;
	tich = a * b;

	printf(" a = 5 , b = 5 \n");
	std::cout << "tong cua a va b la: " << tong;
	std::cout << "\nhieu cua a va b la: " << hieu;
	std::cout << "\ntich cua a va b la: " << tich;
	std::cout << "\nthuong cua a va b la: " << thuong << "\n ";
	system("pause");
*/

float C, F;
	std::cout << "nhap F: ";
	std::cin >> F;
	C = (F - 32) / 1.8000;
	std::cout << "\nnhiet do C la: " << C;
	