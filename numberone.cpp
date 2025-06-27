struct ownerinfo {
	char name[20];
	char phonenumber[13];
	char email[30];
	char address[50];
	char twitterAcount[20];
};

struct ContactInfo {
	char name[20];
	char phonenumber[13];
	char email[30];
	char address[50];
};
ownerinfo owner;
ContactInfo contacts[100];
int contactnumber = 0;
