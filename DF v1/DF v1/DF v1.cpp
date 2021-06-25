#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
void vmain() {
	using namespace std;
	int select;
	cout << " [+] Welcome To DF v1 This is tool using for digital investigators\n ";
	cout << "[+] Attention : Don't use this tool for illegal purpose\n";
	cout << " [+] Programmed by @omarmazin_\n";
	cout << " [1] Displays current ARP entries by interrogating the current protocol data\n";
	cout << " [2] Displays a list of installed device drivers.\n ";
	cout << "[3] Displays the name of the current host.\n";
	cout << " [4] Displays detailed information about all compartments.\n";
	cout << " [5] Displays the contents of the DNS Resolver Cache.\n";
	cout << " [6]Displays a list of all products/softwares installed on the device that is recognized by Windows.\n";
	cout << " [7] Displays a list of all local NetBIOS names.\n";
	cout << " [8] Displays properties of the wireless LAN drivers on the system.\n ";
	cout << "[9] Displays a list of the wireless LAN interfaces on the system.\n";
	cout << " [10] Displays a list of WI-FI profiles configured on the system.\n";
	cout << " [11] Displays all open ports and active connections numerically, including the process IDs.\n ";
	cout << "[12] Displays BIOS serialnumber.\n";
	cout << " [13] Displays Ethernet statistics.\n";
	cout << " [14] Displays a list of all running Windows services.\n ";
	cout << "[15] Display operating system configuration information for a local or remote machine, including service pack levels.\n";
	cout << " [16] Displays all installed services and drivers.\n";
	cout << " [17] Displays all processes & DLLs.\n";
	cout << " [18] Displays a list of all programs that will be started on system startup.\n";
	cout << " [19] Displays the current Windows version.\n";
	cout << " [20] Displays the disk volume label and serial number, if they exist.\n";
	cout << " [21] Displays all logical disks and their information. | Press 21\n";
	cout << " [22] list enabled logs on the system.\n";
	cout << " [23] list all of the installed services and their configurations.\n";
	cout << " [24] Displays all users on the device.\n";
	cout << " [+] Comands Url : https://talalcyber.github.io/posts/cmd-and-win/ \n";
	cout << " [?] Select Command : ";
	cin >> select;
	switch (select) {
	case 1:
		system("arp -a");
		break;
	case 2:
		system("driverquery");
		break;
	case 3:
		system("hostname");
		break;
	case 4:
		system("ipconfig /allcompartments /all");
		break;
	case 5:
		system("ipconfig /displaydns");
		break;
	case 6:
		system("wmic product get name,version");
		break;

	case 7:
		system("nbtstat -n");
		break;
	case 8:
		system("netsh wlan show drivers");
		break;
	case 9:
		system("netsh wlan show interfaces");
		break;
	case 10:
		system("netsh wlan show profiles");
		break;
	case 11:
		system("netstat -ano");
		break;
	case 12:
		system("Displays BIOS serialnumber.");
		break;
	case 13:
		system("netstat -e");
		break;

	case 14:
		system("net start");
		break;
	case 15:
		system("systeminfo");
		break;
	case 16:
		system("sc query state=all");
		break;
	case 17:
		system("tasklist /m");
		break;
	case 18 :
		system("wmic startup list full");
		break;
	case 19 :
		system("ver");
		break;
	case 20:
		system("vol");
		break;
	case 21:
		system("wmic logicaldisk get description,filesystem,name,size");
		break;
	case 22:
		system("wmic nteventlog get path,filename,writeable");
		break;
	case 23:
		system("wmic service list");
		break;
	case 24:
		system("wmic useraccount get name");
		break;
	case 25:
		system("wmic startup list full");
		break;
	default:
		cout << " The command isn't found";
	}
	cout << "\n";
	cout << "=====================================================================================\n";
}
int main(){
	vmain();
	system("pause");
	return 0;
}


