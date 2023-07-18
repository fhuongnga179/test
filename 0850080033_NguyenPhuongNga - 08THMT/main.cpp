// 0850080033_NguyenPhuongNga_08THMT

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
   cout<<"Nhập số câu hỏi?"<<endl;
   cout<<"1. Xuất ra dòng chữ THAO CHUONG BANG NGON NGU C"<<endl;
   cout<<"2. Năm sinh tính số tuổi"<<endl;
   cout<<"3. Chuyển mã ASCII"<<endl;
   cout<<"4. Tính diện tích chu vi hình tròn"<<endl;
   cout<<"5. Nhập số nguyên xuất min, max"<<endl;
   cout<<"6. In thông tin sinh viên"<<endl;
   cout<<"7. Giây -> Giờ phút giây"<<endl;
   cout<<"8. Tính điểm trung bình"<<endl;
   cout<<"9. Ứng dụng 1: Tính hình cầu"<<endl;
   cout<<"10. Ứng dụng 4: Tính điện trở"<<endl;
   cout<<"11. Ứng dụng 7: Giờ phút giây đổi -> giây"<<endl;
   cout<<"12. Ứng dụng 3: Kí tự ASCII"<<endl;
   cout<<"Số nhập là: ";



   int n;
   cin>>n;
   switch(n){
       
       case 1:
       {
        #include <iostream>
        // int main() {
        //     std::string message = "Hello";
        //     int width = message.length() + 4; // Độ dài của dòng chữ + 2 ký tự '*' mỗi bên
        
        //     // In hàng đầu tiên của hình chữ nhật
        //     for (int i = 0; i < width; ++i) {
        //         std::cout << "*";
        //     }
        //     std::cout << std::endl;
        
        //     // In dòng chữ và các ký tự '*' bên trong
        //     std::cout << "* " << message << " *" << std::endl;
        
        //     // In hàng cuối cùng của hình chữ nhật
        //     for (int i = 0; i < width; ++i) {
        //         std::cout << "*";
        //     }
        //     std::cout << std::endl;
        
        //     return 0;
        // }

       cout<<"*********************"<<endl;
       cout<<"* THAO CHUONG BANG  *"<<endl;
       cout<<"*     NGON NGU C    *"<<endl;
       cout<<"*********************"<<endl;
       break;
    }
       case 2:
       {
       cout<<"Nhập năm sinh? ";
       int nam, tuoicuaban;
       cin>>nam;
       tuoicuaban=2023-nam;
       cout<<"Số tuổi của bạn là: "<<tuoicuaban;
       break;
        }
       
       case 3:
       {
       char kitu;
        cout << "Nhập vào một kí tự ";
        cin >> kitu;
    
        int maASCII = static_cast<int>(kitu);
    
        cout << "Mã ASCII của kí tự: '" << kitu << "' là: " << maASCII << endl;
        break;
        }
       
       case 4:
        {
        const float PI = 3.14159;
            float bankinh, chuvi, dientich;
            cout << "Nhập bán kính của hình tròn: ";
            cin >> bankinh;
            chuvi = 2 * PI * bankinh;
            dientich = PI * bankinh * bankinh;
            cout << "Chu vi của hình tròn là: " << chuvi << endl;
            cout << "Diện tích của hình tròn là: " << dientich << endl;
        break;
        }
        
        case 5:
        {
        int num1, num2;
        cout << "Nhập số thứ nhất: ";
        cin >> num1;
        cout << "Nhập số thứ hai: ";
        cin >> num2;
        if (num1 < num2) {
            cout << "Min: " << num1 << endl;
            cout << "Max: " << num2 << endl;
        } else {
            cout << "Min: " << num2 << endl;
            cout << "Max: " << num1 << endl;
        }
        break;
        }
        
        case 6:
        {
        string hoTen;
        int mssv;
        string lop;
        string sdt;
        string gioiTinh;

        cout << "Họ tên: ";
        getline(cin, hoTen);
        cin>>hoTen;
        cout << "Mã số sinh viên: ";
        cin >> mssv;
        cin.ignore(); 
        cout << "Lớp: ";
        getline(cin, lop);
        cout << "Số điện thoại: ";
        cin >> sdt;
        cin.ignore(); 
        cout << "Nhập giới tính sinh viên: ";
        getline(cin, gioiTinh);

        cout << "Thông tin sinh viên:" << endl;
        cout << "Họ và tên: " << hoTen << endl;
        cout << "Mã số sinh viên: " << mssv << endl;
        cout << "Số điện thoại: " << sdt << endl;
        cout << "Lớp: " << lop << endl;
        cout << "Giới tính: " << gioiTinh << endl;
        break;
        }
        
         case 7:
        {
        int tongGiay;
        std::cout << "Nhap tong so giay: ";
        std::cin >> tongGiay;
        int gio, phut, giay;
        gio = tongGiay / 3600;
        tongGiay %= 3600;
        phut = tongGiay / 60; 
        giay = tongGiay % 60; 
        std::cout << "Thoi gian tuong ung: " << gio << " gio, " << phut << " phut, " << giay << " giay" << std::endl;
       }
        
       
        case 8:
        {
        string hoTen;
        int mssv;
        string lop;
        string namhoc;
        string khoa;
        int mon1;
        int mon2;
        int mon3;
        int mon4;
        int mon5;

       cout<<"***BAI TAP THUC HANH LAP TRINH C***"<<endl;
       cout<<"*********** TUAN 1 ****************"<<endl;

        cout << "Họ tên: ";
        getline(cin, hoTen);
        cin>>hoTen;
        cout << "Mã số sinh viên: ";
        cin >> mssv;
        cin.ignore(); 
        cout << "Lớp: ";
        getline(cin, lop);
        cout << "Năm học: ";
        cin >> namhoc;
        cin.ignore(); 
        cout << "Khoa: ";
        getline(cin, khoa);
        cout << "*** BANG DIEM ***"<<endl;
        cout << "Môn 1: ";
        cin >> mon1;
        cin.ignore();
        cout << "Môn 2: ";
        cin >> mon2;
        cin.ignore();
        cout << "Môn 3: ";
        cin >> mon3;
        cin.ignore();
        cout << "Môn 4: ";
        cin >> mon4;
        cin.ignore();
        cout << "Môn 5: ";
        cin >> mon5;
        cin.ignore();
        
        int diemtrungbinh = (mon1 + mon2 + mon3 + mon4 + mon5) / 5;

        cout << "Điểm trung bình: " <<diemtrungbinh << endl;

        break;
        }
        
        case 9:
        {
        const float PI = 3.14159;
            float bankinh, dientich, thetich;
            cout << "Nhập bán kính của hình cầu: ";
            cin >> bankinh;
            
            dientich = 4 * PI * pow(bankinh, 2);
            thetich = (4.0 / 3.0) * PI * pow(bankinh, 3);

            cout << "Diện tích của hình cầu là: " << dientich << endl;
            cout << "Thể tích của hình cầu là: " << thetich << endl;
        break;
        }
        
      
       case 10:
       {
            double r1, r2, r3;
            cout << "Nhập điện trở R1: ";
            cin >> r1;
            cout << "Nhập điện trở R2: ";
            cin >> r2;
            cout << "Nhập điện trở R3: ";
            cin >> r3;
            
            double r = 1 / (1 / r1 + 1 / r2 + 1 / r3);
            cout << "Điện trở tương đương: " << r << endl;
        break;
        }
       
       case 11:
       {
        int gio, phut, giay;
        cout << "Nhap so gio: ";
        cin >> gio;
        cout << "Nhap so phut: ";
        cin >> phut;
        cout << "Nhap so giay: ";
        cin >> giay;
    
        int tonggiay = gio * 3600 + phut * 60 + giay;
        cout << "Tổng số giây tương ứng là: " << tonggiay << " Giây" << endl;
        }
       
       case 12:
       {
        char kitu;
        cout << "Nhập vào một kí tự: ";
        cin >> kitu;
    
        int maASCII = static_cast<int>(kitu);
    
        cout << "Mã ASCII của kí tự: '" << kitu << "' là: " << maASCII << endl;
    
        char kituketiep = kitu + 1;
    
        cout << "Kí tự kế tiếp là: " << kituketiep << endl;
        break;

       }
       
       return 0;
   }
}
