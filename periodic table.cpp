#include<iostream>
using namespace std;
int main()
{
	int k,i;
	
	cout<<"************************* PERIODIC TABLE OF THE ELEMENTS *************************          "<<endl;
	
	for(i=0;i<5;i++){
	
	cout<<"please enter the number of elemant"<<endl;
	cin>>k;
	
	switch(k){
	
		case 1:
			cout<<"THIS IS THE HYDROGEN AND IT'S SYMBOL IS: H"<<endl;
			break;
	    case 2:
	    	cout<<"THIS IS THE HELIUM AND IT'S SYMBOL IS: He"<<endl;
	    	break;
	    case 3:
	    	cout<<"THIS IS LITHIUM AND IT'S SYMBOL IS: Li"<<endl;
	    	break;
	    case 4:
	    	cout<<"THIS IS BERYLLIUM AND IT'S SYMBOL IS: Be"<<endl;
	    	break;
	    case 5:
	    	cout<<"THIS IS BORON AND IT'S SYMBOL IS: B"<<endl;
	    	break;
	    case 6:
	    	cout<<"THIS IS CARBON AND IT'S SYMBOL IS: C"<<endl;
	    	break;
	    case 7:
	    	cout<<"THIS IS NITROGEN AND IT'S SYMBOL IS: N"<<endl;
	    	break;
	    case 8:
	    	cout<<"THIS IS OXYGEN AND IT'S SYMBOL IS: O"<<endl;
	    	break;
	    case 9:
	    	cout<<"THIS IS FLUORINE AND IT'S SYMBOL IS: F"<<endl;
	    	break;
	    case 10:
	    	cout<<"THIS IS NEON AND IT'S SYMBOL IS: Ne"<<endl;
	    	break;
        case 11:  
	    	cout<<"THIS IS SODIUM AND IT'S SYMBOL IS: Na"<<endl;
	    	break;	
	    case 12:
	    	cout<<"THIS IS MAGNESIUM AND IT'S SYMBOL IS: Mg"<<endl;
	    	break;
	    case 13:
	    	cout<<"THIS IS ALUMINIUM AND IT'S SYMBOL IS: Al"<<endl;
	    	break;
	    case 14:
	    	cout<<"THIS IS SILICON AND IT'S SYMBOL IS: Si"<<endl;
	    	break;	
	   	case 15:
	    	cout<<"THIS IS PHOSPHORUS AND IT'S SYMBOL IS: P"<<endl;
	    	break;
		case 16:
	    	cout<<"THIS IS SULPHUR AND IT'S SYMBOL IS: S"<<endl;
	    	break;
		case 17:
	    	cout<<"THIS IS CHLORINE AND IT'S SYMBOL IS: Cl"<<endl;
	    	break;
		case 18:
	    	cout<<"THIS IS ARGON AND IT'S SYMBOL IS: Ar"<<endl;
	    	break;
		case 19:
	    	cout<<"THIS IS POTASSIUM AND IT'S SYMBOL IS: K"<<endl;
	    	break;
		case 20:
	    	cout<<"THIS IS CALCIUM AND IT'S SYMBOL IS: Ca"<<endl;
	    	break;
		case 21:
	    	cout<<"THIS IS SCANDIUM AND IT'S SYMBOL IS: Sc"<<endl;
	    	break;	
		case 22:
	    	cout<<"THIS IS TITANIUM AND IT'S SYMBOL IS: Ti"<<endl;
	    	break;
		case 23:
	    	cout<<"THIS IS VANADIUM AND IT'S SYMBOL IS: V"<<endl;
	    	break;
		case 24:
	    	cout<<"THIS IS CHROMIUM AND IT'S SYMBOL IS: Cr"<<endl;
	    	break;
		case 25:
	    	cout<<"THIS IS MANGANESE AND IT'S SYMBOL IS: Mn"<<endl;
	    	break;
		case 26:
	    	cout<<"THIS IS IRON AND IT'S SYMBOL IS: Fe"<<endl;
	    	break;	
		case 27:
	    	cout<<"THIS IS COBALT AND IT'S SYMBOL IS: Co"<<endl;
	    	break;
		case 28:
	    	cout<<"THIS IS NICKEL AND IT'S SYMBOL IS: Ni"<<endl;
	    	break;
		case 29:
	    	cout<<"THIS IS COPPER AND IT'S SYMBOL IS: Cu"<<endl;
	    	break;	
		case 30:
	    	cout<<"THIS IS ZINC AND IT'S SYMBOL IS: Zn"<<endl;
	    	break;
		case 31:
	    	cout<<"THIS IS GALLIUM AND IT'S SYMBOL IS: Ga"<<endl;
	    	break;
		case 32:
	    	cout<<"THIS IS GERMANIUM AND IT'S SYMBOL IS: Ge"<<endl;
	    	break;
		case 33:
	    	cout<<"THIS IS ARSENIC AND IT'S SYMBOL IS: As"<<endl;
	    	break;
		case 34:
	    	cout<<"THIS IS SELENIUM AND IT'S SYMBOL IS: Se"<<endl;
	    	break;
		case 35:
	    	cout<<"THIS IS BROMINE AND IT'S SYMBOL IS: Br"<<endl;
	    	break;	
		case 36:
	    	cout<<"THIS IS KRYPTON AND IT'S SYMBOL IS: Kr"<<endl;
	    	break;
		case 37:
	    	cout<<"THIS IS RUBIDIUM AND IT'S SYMBOL IS: Rb"<<endl;
	    	break;
		case 38:
	    	cout<<"THIS IS STRONTIUM AND IT'S SYMBOL IS: Sr"<<endl;
	    	break;
		case 39:
	    	cout<<"THIS IS YTTRIUM AND IT'S SYMBOL IS: Y"<<endl;
	    	break;
		case 40:
	    	cout<<"THIS IS ZIRCONIUM AND IT'S SYMBOL IS: Zr"<<endl;
	    	break;	
		case 41:
			cout<<"THIS IS THE NIOBIUM AND IT'S SYMBOL IS: Nb"<<endl;
			break;
	    case 42:
	    	cout<<"THIS IS THE MOLYBDENUM AND IT'S SYMBOL IS: Mo"<<endl;
	    	break;
	    case 43:
	    	cout<<"THIS IS TECHNETIUM AND IT'S SYMBOL IS: Tc"<<endl;
	    	break;
	    case 44:
	    	cout<<"THIS IS RUTHENIUM AND IT'S SYMBOL IS: Ru"<<endl;
	    	break;
	    case 45:
	    	cout<<"THIS IS RHODIUM AND IT'S SYMBOL IS: Rh"<<endl;
	    	break;
	    case 46:
	    	cout<<"THIS IS PALLADIUM AND IT'S SYMBOL IS: Pd"<<endl;
	    	break;
	    case 47:
	    	cout<<"THIS IS SILVER AND IT'S SYMBOL IS: Ag"<<endl;
	    	break;
	    case 48:
	    	cout<<"THIS IS CADMIUM AND IT'S SYMBOL IS: Cd"<<endl;
	    	break;
	    case 49:
	    	cout<<"THIS IS INDIUM AND IT'S SYMBOL IS: In"<<endl;
	    	break;
	    case 50:
	    	cout<<"THIS IS TIN AND IT'S SYMBOL IS: Sn"<<endl;
	    	break;
        case 51:  
	    	cout<<"THIS IS ANTIMONY AND IT'S SYMBOL IS: Sb"<<endl;
	    	break;	
	    case 52:
	    	cout<<"THIS IS TELLURIUM AND IT'S SYMBOL IS: Te"<<endl;
	    	break;
	    case 53:
	    	cout<<"THIS IS IODINE AND IT'S SYMBOL IS: I"<<endl;
	    	break;
	    case 54:
	    	cout<<"THIS IS XENON AND IT'S SYMBOL IS: Xe"<<endl;
	    	break;	
	   	case 55:
	    	cout<<"THIS IS CAESIUM AND IT'S SYMBOL IS: Cs"<<endl;
	    	break;
		case 56:
	    	cout<<"THIS IS BARIUM AND IT'S SYMBOL IS: Ba"<<endl;
	    	break;
		case 57:
	    	cout<<"THIS IS LANTHANUM AND IT'S SYMBOL IS: La"<<endl;
	    	break;
		case 58:
	    	cout<<"THIS IS CERIUM AND IT'S SYMBOL IS: Ce"<<endl;
	    	break;
		case 59:
	    	cout<<"THIS IS PRASEODYMIUM AND IT'S SYMBOL IS: Pr"<<endl;
	    	break;
		case 60:
	    	cout<<"THIS IS NEODYMIUM AND IT'S SYMBOL IS: Nd"<<endl;
	    	break;
		case 61:
	    	cout<<"THIS IS PROMETHIUM AND IT'S SYMBOL IS: Pm"<<endl;
	    	break;	
		case 62:
	    	cout<<"THIS IS SAMARIUM AND IT'S SYMBOL IS: Sm"<<endl;
	    	break;
		case 63:
	    	cout<<"THIS IS EUROPIUM AND IT'S SYMBOL IS: Eu"<<endl;
	    	break;
		case 64:
	    	cout<<"THIS IS GADOLINIUM AND IT'S SYMBOL IS: Gd"<<endl;
	    	break;
		case 65:
	    	cout<<"THIS IS TERBIUM AND IT'S SYMBOL IS: Tb"<<endl;
	    	break;
		case 66:
	    	cout<<"THIS IS DYSPROSIUM AND IT'S SYMBOL IS: Dy"<<endl;
	    	break;	
		case 67:
	    	cout<<"THIS IS HOLMIUM AND IT'S SYMBOL IS: Ho"<<endl;
	    	break;
		case 68:
	    	cout<<"THIS IS ERBIUM AND IT'S SYMBOL IS: Er"<<endl;
	    	break;
		case 69:
	    	cout<<"THIS IS THULIUM AND IT'S SYMBOL IS: Tm"<<endl;
	    	break;	
		case 70:
	    	cout<<"THIS IS YTTERBIUM AND IT'S SYMBOL IS: Yb"<<endl;
	    	break;
		case 71:
	    	cout<<"THIS IS LUTETIUM AND IT'S SYMBOL IS: Lu"<<endl;
	    	break;
		case 72:
	    	cout<<"THIS IS HAFNIUM AND IT'S SYMBOL IS: Hf"<<endl;
	    	break;
		case 73:
	    	cout<<"THIS IS TANTALUM AND IT'S SYMBOL IS: Ta"<<endl;
	    	break;
		case 74:
	    	cout<<"THIS IS TUNGSTEN AND IT'S SYMBOL IS: W"<<endl;
	    	break;
		case 75:
	    	cout<<"THIS IS RHENIUM AND IT'S SYMBOL IS: Re"<<endl;
	    	break;	
		case 76:
	    	cout<<"THIS IS OSMIUM AND IT'S SYMBOL IS: Os"<<endl;
	    	break;
		case 77:
	    	cout<<"THIS IS IRIDIUM AND IT'S SYMBOL IS: Ir"<<endl;
	    	break;
		case 78:
	    	cout<<"THIS IS PLATINUM AND IT'S SYMBOL IS: Pt"<<endl;
	    	break;
		case 79:
	    	cout<<"THIS IS GOLD AND IT'S SYMBOL IS: Au"<<endl;
	    	break;
		case 80:
	    	cout<<"THIS IS MERCURY AND IT'S SYMBOL IS: Hg"<<endl;
	    	break;
		case 81:
			cout<<"THIS IS THE THALLIUM AND IT'S SYMBOL IS: Tl"<<endl;
			break;
	    case 82:
	    	cout<<"THIS IS THE LEAD AND IT'S SYMBOL IS: Pb"<<endl;
	    	break;
	    case 83:
	    	cout<<"THIS IS BISMUTH AND IT'S SYMBOL IS: Bi"<<endl;
	    	break;
	    case 84:
	    	cout<<"THIS IS POLONIUM AND IT'S SYMBOL IS: Po"<<endl;
	    	break;
	    case 85:
	    	cout<<"THIS IS ASTATINE AND IT'S SYMBOL IS: At"<<endl;
	    	break;
	    case 86:
	    	cout<<"THIS IS RADON AND IT'S SYMBOL IS: Rn"<<endl;
	    	break;
	    case 87:
	    	cout<<"THIS IS FRANCIUM AND IT'S SYMBOL IS: Fr"<<endl;
	    	break;
	    case 88:
	    	cout<<"THIS IS RADIUM AND IT'S SYMBOL IS: Ra"<<endl;
	    	break;
	    case 89:
	    	cout<<"THIS IS ACTINIUM AND IT'S SYMBOL IS: Ac"<<endl;
	    	break;
	    case 90:
	    	cout<<"THIS IS THORIUM AND IT'S SYMBOL IS: Th"<<endl;
	    	break;
        case 91:  
	    	cout<<"THIS IS PROTACTINIUM AND IT'S SYMBOL IS: Pa"<<endl;
	    	break;	
	    case 92:
	    	cout<<"THIS IS URANIUM AND IT'S SYMBOL IS: U"<<endl;
	    	break;
	    case 93:
	    	cout<<"THIS IS NEPTUNIUM AND IT'S SYMBOL IS: Np"<<endl;
	    	break;
	    case 94:
	    	cout<<"THIS IS PLUTONIUM AND IT'S SYMBOL IS: Pu"<<endl;
	    	break;	
	   	case 95:
	    	cout<<"THIS IS AMERICIUM AND IT'S SYMBOL IS: Am"<<endl;
	    	break;
		case 96:
	    	cout<<"THIS IS CURIUM AND IT'S SYMBOL IS: Cm"<<endl;
	    	break;
		case 97:
	    	cout<<"THIS IS BERKELIUM AND IT'S SYMBOL IS: Bk"<<endl;
	    	break;
		case 98:
	    	cout<<"THIS IS CALIFORNIUM AND IT'S SYMBOL IS: Cf"<<endl;
	    	break;
		case 99:
	    	cout<<"THIS IS EINSTEINIUM AND IT'S SYMBOL IS: Es"<<endl;
	    	break;
		case 100:
	    	cout<<"THIS IS FERMIUM AND IT'S SYMBOL IS: Fm"<<endl;
	    	break;
		case 101:
	    	cout<<"THIS IS MENDELIUM AND IT'S SYMBOL IS: Md"<<endl;
	    	break;	
		case 102:
	    	cout<<"THIS IS NOBELIUM AND IT'S SYMBOL IS: No"<<endl;
	    	break;
		case 103:
	    	cout<<"THIS IS LAWRENCIUM AND IT'S SYMBOL IS: Lr"<<endl;
	    	break;
		case 104:
	    	cout<<"THIS IS RUTHERFORDIUM AND IT'S SYMBOL IS: Rf"<<endl;
	    	break;
		case 105:
	    	cout<<"THIS IS DUBNIUM AND IT'S SYMBOL IS: Db"<<endl;
	    	break;
		case 106:
	    	cout<<"THIS IS SEABORGIUM AND IT'S SYMBOL IS: Sg"<<endl;
	    	break;	
		case 107:
	    	cout<<"THIS IS BOHRIUM AND IT'S SYMBOL IS: Bh"<<endl;
	    	break;
		case 108:
	    	cout<<"THIS IS HASSIUM AND IT'S SYMBOL IS: Hs"<<endl;
	    	break;
		case 109:
	    	cout<<"THIS IS MEITNERIUM AND IT'S SYMBOL IS: Mt"<<endl;
	    	break;	
		case 110:
	    	cout<<"THIS IS DARMSTADTIUM AND IT'S SYMBOL IS: Ds"<<endl;
	    	break;
		case 111:
	    	cout<<"THIS IS ROENTGENIUM AND IT'S SYMBOL IS: Rg"<<endl;
	    	break;
		case 112:
	    	cout<<"THIS IS COPERNICIUM AND IT'S SYMBOL IS: Cn"<<endl;
	    	break;
		case 113:
	    	cout<<"THIS IS UNUNTRIUM AND IT'S SYMBOL IS: Uut"<<endl;
	    	break;
		case 114:
	    	cout<<"THIS IS FLEROVIUM AND IT'S SYMBOL IS: Fl"<<endl;
	    	break;
		case 115:
	    	cout<<"THIS IS UNUNPENTIUM AND IT'S SYMBOL IS: Uup"<<endl;
	    	break;	
		case 116:
	    	cout<<"THIS IS LIVERMORIUM AND IT'S SYMBOL IS: Lv"<<endl;
	    	break;
		case 117:
	    	cout<<"THIS IS UNUNSEPTIUM AND IT'S SYMBOL IS: Uus"<<endl;
	    	break;
		case 118:
	    	cout<<"THIS IS UNUNOCTIUM AND IT'S SYMBOL IS: Uuo"<<endl;
	    	break;
																								
	    	default:
	    	cout<<"I THINK YOU ARE COME ANOTHER PLANET ,SO GO YOUR PLANET AND SEARCH"<<endl;}
	    
	    if(k>=57&&k<=71){
	    	cout<<"AND IT IS THE PART OF LANTHANIDE AND IT PRESENT IN F BLOCK "<<endl;
		};
		if(k>=89&&k<=103){
			cout<<"AND IT IS THE PART OF ACTINIDE AND IT PRESENT IN F BLOCK"<<endl;
		};
		if(k==1||k==3||k==11||k==19||k==37||k==55||k==87){
			cout<<"AND IT IS THE PART OF S BLOCK ,AND IT IS A ALKALI METALS"<<endl;
		};
		if(k==4||k==12||k==20||k==38||k==56||k==88){
			cout<<"AND IT IS THE PART OF S BLOCK,AND IT IS A ALKALINE EARTH METALS"<<endl;
		};
	
		if(k==5||k==13||k==31||k==49||k==81||k==113){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF ICOSAGENS"<<endl;
		};
		if(k==6||k==14||k==32||k==50||k==82||k==114){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF CRYSTALLOGENS"<<endl;
		};
		if(k==7||k==15||k==33||k==51||k==83||k==115){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF PNICTOGENS"<<endl;
		};
		if(k==8||k==16||k==34||k==52||k==84||k==116){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF CHALCOGENS"<<endl;
		};
		if(k==9||k==17||k==35||k==53||k==85||k==117){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF HALOGENS"<<endl;
		};
		if(k==10||k==2||k==18||k==36||k==54||k==86||k==118){
			cout<<"IT IS THE PART OF P BLOCK AND IT IS ALSO PART OF NOBLE GASES"<<endl;
	};
	if(k>=21&&k<=30){
		cout<<"IT IS THE PART OF D BLOCK AND IT IS ALSO PART OF TRANSITION METALS"<<endl;
	}
	if(k>=39&&k<=48){
			cout<<"IT IS THE PART OF D BLOCK AND IT IS ALSO PART OF TRANSITION METALS"<<endl;
	}
	if(k>=72&&k<=80){
			cout<<"IT IS THE PART OF D BLOCK AND IT IS ALSO PART OF TRANSITION METALS"<<endl;
	}
	if(k>=104&&k<=112){
			cout<<"IT IS THE PART OF D BLOCK AND IT IS ALSO PART OF TRANSITION METALS"<<endl;
	}

	    	
}
	
	return 0;
}
