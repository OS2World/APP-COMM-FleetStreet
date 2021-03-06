/* HELP.H */

#define FLEET_HELP_TABLE        10000

/* Hauptfenster und Menue */

#define SUBTABLE_MAIN           20000
#define SUBTABLE_REGONLY        21000
#define SUBTABLE_SETUP          21100
#define SUBTABLE_ATTRIB         21200
#define SUBTABLE_REPLY          21300
#define SUBTABLE_FIND           21400
#define SUBTABLE_AREALIST       21500
#define SUBTABLE_MSGLIST        21600

#define SUBTABLE_SU_NEWUSER     21700
#define SUBTABLE_KLUDGEINFO     21800
#define SUBTABLE_DELNICKNAME    21900
#define SUBTABLE_HAVEAREA       22000
#define SUBTABLE_ABOUTDLG       22100
#define SUBTABLE_FILEDLG        22300
#define SUBTABLE_AREASETTINGS   22400
#define SUBTABLE_DELETEAREA     22500
#define SUBTABLE_SU_NEWADDRESS  22600
#define SUBTABLE_DELUNAME       22700
#define SUBTABLE_DELADDRESS     22800
#define SUBTABLE_REQUESTER      22900
#define SUBTABLE_REPLYLIST      23000
#define SUBTABLE_DUPAREAS       23100
#define SUBTABLE_ERRORINIFILE   23200
#define SUBTABLE_NOINIFILE      23300
#define SUBTABLE_OLDINIFILE     23400
#define SUBTABLE_CURRENTNAME    23500
#define SUBTABLE_DELETE         23600
#define SUBTABLE_BEENSENT       23700
#define SUBTABLE_DISCARD        23800
#define SUBTABLE_EXITNOSAVE     23900
#define SUBTABLE_INFOMISSING    24000
#define SUBTABLE_TOOLONG        24100
#define SUBTABLE_ERRORMSGSAVE   24200
#define SUBTABLE_FINDPROGRESS   24300
#define SUBTABLE_FINDRESULTS    24400
#define SUBTABLE_THREADLIST     24500
#define SUBTABLE_INVALIDFILE    24600
#define SUBTABLE_MARKALL        24700  /* unbenutzt */
#define SUBTABLE_ERRORLOAD      24800
#define SUBTABLE_EXPORTFILE     24900
#define SUBTABLE_CCLISTSETUP    25000
#define SUBTABLE_CCLIST         25100
#define SUBTABLE_CCLISTENTRY    25200
#define SUBTABLE_CCLISTNAME     25300  /* unbenutzt */
#define SUBTABLE_DELCCLIST      25400
#define SUBTABLE_HAVECCLIST     25500  /* unbenutzt */
#define SUBTABLE_DELCCENTRY     25600
#define SUBTABLE_TEMPLATE       25700
#define SUBTABLE_CCLISTSELECT   25800
#define SUBTABLE_INVALIDFILENAME 25900
#define SUBTABLE_ERRORSAVE      26000
#define SUBTABLE_RESEND         26100
#define SUBTABLE_NICKENTRY      26200
#define SUBTABLE_HAVENICKNAME   26300
#define SUBTABLE_NICKPROMPT     26400
#define SUBTABLE_LOOKUPHANDLE   26500
#define SUBTABLE_SQPARAMS       26600
#define SUBTABLE_NODEVICE       26700
#define SUBTABLE_LOOKUP         26900
#define SUBTABLE_IDXOPENERR     27000
#define SUBTABLE_DATOPENERR     27100
#define SUBTABLE_IDXREADERR     27200
#define SUBTABLE_DATREADERR     27300
#define SUBTABLE_LOOKUPMEM      27400
#define SUBTABLE_ERRREADSQPARAM 27500
#define SUBTABLE_ERRWRITESQPARAM 27600
#define SUBTABLE_SQPARAMVALUES  27700
#define SUBTABLE_DOMAINENTRY    27800
#define SUBTABLE_HAVEDOMAIN     27900
#define SUBTABLE_DELDOMAIN      28000
#define SUBTABLE_FALSEREGISTER  28100
#define SUBTABLE_RENUMBER       28200
#define SUBTABLE_AREALISTSETT   28300
#define SUBTABLE_ATTACHSTAT     28400
#define SUBTABLE_NEXTAREA       28500
#define SUBTABLE_NONEXTAREA     28600
#define SUBTABLE_WORKERROR      28700
#define SUBTABLE_LOCKERROR      28800
#define SUBTABLE_BCDELERROR     28900
#define SUBTABLE_IMPORTCCLIST   29000
#define SUBTABLE_MLISTSETT      30000
#define SUBTABLE_TPLFOLDER      30100
#define SUBTABLE_DELTEMPLATE    30200
#define SUBTABLE_NOCCLIST       30300
#define SUBTABLE_NOCCENTRIES    30400
#define SUBTABLE_MODQUICKCC     30500
#define SUBTABLE_THRLISTSETTINGS 30600
#define SUBTABLE_DOINGWORK      30700
#define SUBTABLE_REPLACENICK    30800
#define SUBTABLE_CATCHUP        31000
#define SUBTABLE_RXFOLDER       31100
#define SUBTABLE_RXSETTINGS     31200
#define SUBTABLE_RXMONITOR      31300
#define SUBTABLE_DELSCRIPT      31400
#define SUBTABLE_REXXERROR      31500
#define SUBTABLE_RXFSETTINGS    31600
#define SUBTABLE_PERSMAILOPT    31700
#define SUBTABLE_FINDNOPARTS    31800
#define SUBTABLE_FINDNOAREAS    31900
#define SUBTABLE_FINDNOTEXT     32000
#define SUBTABLE_NOTTHERE       32100
#define SUBTABLE_NLBROWSER      32200
#define SUBTABLE_ETOSSERROR     32300
#define SUBTABLE_NOAREATAG      32400
#define SUBTABLE_NOPATHFILE     32500
#define SUBTABLE_NICKNAMES      32600
#define SUBTABLE_ECHOMANAGER    32700
#define SUBTABLE_ECHOMGRSETTINGS 32800
#define SUBTABLE_NOUPLINKAREAS  32900
#define SUBTABLE_NOACTIONS      33000
#define SUBTABLE_DOEXTRACT      33100
#define SUBTABLE_EM_DLLLOAD     33200
#define SUBTABLE_EM_DLLVER      33300
#define SUBTABLE_EM_DLLFUNC     33400
#define SUBTABLE_EM_DLLINT      33500
#define SUBTABLE_EM_CFGNOTF     33600
#define SUBTABLE_EM_INIT        33700
#define SUBTABLE_EM_CFGREAD     33800
#define SUBTABLE_EM_CFGWRITE    33900
#define SUBTABLE_EM_CFGFORMAT   34000
#define SUBTABLE_EM_CFGLINKED   34100
#define SUBTABLE_EM_CFGUNLINKED 34200
#define SUBTABLE_UPLINK         34300
#define SUBTABLE_EM_NOPASS      34400
#define SUBTABLE_DELUPLINK      34500
#define SUBTABLE_INITERROR      34600
#define SUBTABLE_EM_APPENDAREAS 34700
#define SUBTABLE_SEARCH         34800
#define SUBTABLE_PRINTSETUP     34900
#define SUBTABLE_TOOLBARCONFIG  35000
#define SUBTABLE_REQ_ADDLIST    35100
#define SUBTABLE_REQ_DELLIST    35200
#define SUBTABLE_REQ_ADDFILE    35300
#define SUBTABLE_REQ_SETPASS    35400
#define SUBTABLE_REQ_ERROR      35500
#define SUBTABLE_CFGDLLERROR    35600

#define PANEL_MAIN              20001
#define PANEL_KEYS              20002

#define PANEL_MENUFILE          20010
#define PANEL_MENUEXIT          20011
#define PANEL_MENUIMPORTFILE    20012
#define PANEL_MENUEXPORTFILE    20013
#define PANEL_MENUFILEECHOTOSS  20014
#define PANEL_MENUFILEPRINT     20015
#define PANEL_MENUFILESHELL     20016
#define PANEL_MENUFILEPRINTSETUP 20017

#define PANEL_MENUEDIT          20020
#define PANEL_MENUEDITCUT       20021
#define PANEL_MENUEDITCOPY      20022
#define PANEL_MENUEDITPASTE     20023
#define PANEL_MENUEDITCLEAR     20024
#define PANEL_MENUEDITUNDO      20025
#define PANEL_MENUEDITDELLINE   20026
#define PANEL_MENUEDITSEARCH    20027

#define PANEL_MENUOPTIONS       20030
#define PANEL_MENUOPTIONSCFG    20031
#define PANEL_MENUOPTIONSSAVE   20032
#define PANEL_MENUOPTIONSNAME   20033
#define PANEL_MENUOPTIONSCCL    20034
#define PANEL_MENUOPTIONSTEMPL  20035
#define PANEL_MENUOPTIONSNICK   20036
#define PANEL_MENUOPTIONSECHO   20037
#define PANEL_MENUOPTIONSADDAR  20038

#define PANEL_MENUHELP          20040
#define PANEL_MENUHELPKEYS      20041
#define PANEL_MENUHELPABOUT     20042
#define PANEL_MENUHELPGENERAL   20043
#define PANEL_MENUHELPUSING     20044
#define PANEL_MENUHELPINDEX     20045

#define PANEL_MENUMESSAGE       20050
#define PANEL_MENUMSGMOVE       20051
#define PANEL_MENUMSGXPOST      20052
#define PANEL_MENUMSGREQUEST    20053
#define PANEL_MENUMSGCCOPY      20054
#define PANEL_MENUMSGMARK       20055
#define PANEL_MENUMSGNEW        20056
#define PANEL_MENUMSGCHANGE     20057
#define PANEL_MENUMSGREPLY      20058
#define PANEL_MENUMSGDELETE     20059
#define PANEL_MENUMSGFIND       20060
#define PANEL_MENUMSGCOPY       20061
#define PANEL_MENUMSGFORWARD    20062
#define PANEL_MENUMSGBCAST      20063
#define PANEL_MENUMSGBCDELETE   20064
#define PANEL_MENUMSGBCMODIFY   20065
#define PANEL_MENUMSGQUICKCC    20066
#define PANEL_MENUMSGMARKMSG    20067
#define PANEL_MENUMSGUNMARKMSG  20068

#define PANEL_MENUWINDOWS       20070
#define PANEL_MENUWINKLUDGES    20071
#define PANEL_MENUWINTHREADS    20072
#define PANEL_MENUWINPROGRESS   20073
#define PANEL_MENUWINRESULTS    20074
#define PANEL_MENUWINAREAS      20075
#define PANEL_MENUWINMSGS       20076

#define PANEL_MENUSPECIAL       20080
#define PANEL_MENUSPCADDTONICK  20081
#define PANEL_MENUSPCADDTOCC    20082
#define PANEL_MENUSPCBROWSER    20083

#define PANEL_MENUREXX          20090
#define PANEL_MENURXSCRIPTS     20091
#define PANEL_MENURXQUICK       20092

#define PANEL_REGONLY           21001

/* Setup-Dialog */
#define PANEL_SETUP             21101

#define PANEL_SU_USER           21102
#define PANEL_SU_SQUISH         21103
#define PANEL_SU_NICKNAMES      21104
#define PANEL_SU_MACROS         21105
#define PANEL_SU_NODELIST       21107
#define PANEL_SU_OPTIONS        21109
#define PANEL_SU_TOSSERPATHS    21110
#define PANEL_SU_REGISTER       21111
#define PANEL_SU_THREADS        21113
#define PANEL_SU_ADDRESSES      21115
#define PANEL_SU_ORIGIN         21116
#define PANEL_SU_DOMAINS        21117
#define PANEL_SU_MODEMTYPES     21118
#define PANEL_SU_STARTUP        21119
#define PANEL_SU_EDITOROPT      21120
#define PANEL_SU_DRIVEREMAP     21121
#define PANEL_SU_SAFETY         21122
#define PANEL_SU_OPENWIN        21123

/* Attribute-Dialog */
#define PANEL_ATTRIB            21201

/* Reply-Dialog */
#define PANEL_REPLY             21301

/* Find-Dialog */
#define PANEL_FIND              21401

/* Arealisten-Dialog */
#define PANEL_AREALIST          21501

/* Messagelisten-Dialog */
#define PANEL_MSGLIST           21601

#define PANEL_SU_NEWUSER        21701
#define PANEL_KLUDGEINFO        21801
#define PANEL_DELNICKNAME       21901

#define PANEL_HAVEAREA          22001
#define PANEL_ABOUTDLG          22101
#define PANEL_FILEDLG           22301
#define PANEL_AREASETTINGS      22401
#define PANEL_AS_GENERAL        22402
#define PANEL_AS_MSGBASE        22403
#define PANEL_AS_ATTRIB         22404

#define PANEL_DELETEAREA        22501
#define PANEL_SU_NEWADDRESS     22601
#define PANEL_DELUNAME          22701
#define PANEL_DELADDRESS        22801
#define PANEL_REQUESTER         22901
#define PANEL_REPLYLIST         23001
#define PANEL_DUPAREAS          23101
#define PANEL_ERRORINIFILE      23201
#define PANEL_NOINIFILE         23301
#define PANEL_OLDINIFILE        23401
#define PANEL_CURRENTNAME       23501
#define PANEL_DELETE            23601
#define PANEL_BEENSENT          23701
#define PANEL_DISCARD           23801
#define PANEL_EXITNOSAVE        23901
#define PANEL_INFOMISSING       24001
#define PANEL_TOOLONG           24101
#define PANEL_ERRORMSGSAVE      24201
#define PANEL_FINDPROGRESS      24301
#define PANEL_FINDRESULTS       24401
#define PANEL_THREADLIST        24501
#define PANEL_INVALIDFILE       24601
#define PANEL_MARKALL           24701  /* unbenutzt */
#define PANEL_ERRORLOAD         24801
#define PANEL_EXPORTFILE        24901
#define PANEL_CCLISTSETUP       25001
#define PANEL_CCLIST            25101
#define PANEL_CCLISTENTRY       25201
#define PANEL_CCLISTNAME        25301  /* unbenutzt */
#define PANEL_DELCCLIST         25401
#define PANEL_HAVECCLIST        25501  /* unbenutzt */
#define PANEL_DELCCENTRY        25601
#define PANEL_TEMPLATE          25701
#define PANEL_TE_QUOTE          25710
#define PANEL_TE_HEADER         25711
#define PANEL_TE_FOOTER         25712
#define PANEL_TE_REPLY          25713
#define PANEL_TE_DAREA          25714
#define PANEL_TE_FORWARD        25715
#define PANEL_TE_XPOST          25716
#define PANEL_TE_CCOPY          25717
#define PANEL_TE_FORWARDFOOTER  25718
#define PANEL_TE_FORWARDORDER   25719
#define PANEL_TE_ORIGIN         25720
#define PANEL_CCLISTSELECT      25801
#define PANEL_INVALIDFILENAME   25901
#define PANEL_ERRORSAVE         26001
#define PANEL_RESEND            26101
#define PANEL_NICKENTRY         26201
#define PANEL_HAVENICKNAME      26301
#define PANEL_NICKPROMPT        26401
#define PANEL_LOOKUPHANDLE      26501
#define PANEL_SQPARAMS          26601
#define PANEL_NODEVICE          26701
#define PANEL_LOOKUP            26901
#define PANEL_IDXOPENERR        27001
#define PANEL_DATOPENERR        27101
#define PANEL_IDXREADERR        27201
#define PANEL_DATREADERR        27301
#define PANEL_LOOKUPMEM         27401
#define PANEL_ERRREADSQPARAM    27501
#define PANEL_ERRWRITESQPARAM   27601
#define PANEL_SQPARAMVALUES     27701
#define PANEL_DOMAINENTRY       27801
#define PANEL_HAVEDOMAIN        27901
#define PANEL_DELDOMAIN         28001
#define PANEL_FALSEREGISTER     28101
#define PANEL_RENUMBER          28201
#define PANEL_AREALISTSETT      28301
#define PANEL_ALS_VIEW          28302
#define PANEL_ALS_COLORS        28304
#define PANEL_ATTACHSTAT        28401
#define PANEL_NEXTAREA          28501
#define PANEL_NONEXTAREA        28601
#define PANEL_WORKERROR         28701
#define PANEL_LOCKERROR         28801
#define PANEL_BCDELERROR        28901
#define PANEL_IMPORTCCLIST      29001
#define PANEL_MLISTSETT         30001
#define PANEL_MLS_COLORS        30002
#define PANEL_TPLFOLDER         30101
#define PANEL_DELTEMPLATE       30201
#define PANEL_NOCCLIST          30301
#define PANEL_NOCCENTRIES       30401
#define PANEL_MODQUICKCC        30501
#define PANEL_THRLISTSETTINGS   30601
#define PANEL_THRLISTCOLORS     30602
#define PANEL_DOINGWORK         30701
#define PANEL_REPLACENICK       30801
#define PANEL_CATCHUP           31001
#define PANEL_RXFOLDER          31101
#define PANEL_RXSETTINGS        31201
#define PANEL_RXSETTINGS_GEN    31202
#define PANEL_RXSETTINGS_MONI   31203
#define PANEL_RXMONITOR         31301
#define PANEL_DELSCRIPT         31401
#define PANEL_REXXERROR         31501
#define PANEL_RXHOOKS           31601
#define PANEL_PERSMAILOPT       31701
#define PANEL_FINDNOPARTS       31801
#define PANEL_FINDNOAREAS       31901
#define PANEL_FINDNOTEXT        32001
#define PANEL_NOTTHERE          32101
#define PANEL_NLBROWSER         32201
#define PANEL_ETOSSERROR        32301
#define PANEL_NOAREATAG         32401
#define PANEL_NOPATHFILE        32501
#define PANEL_ECHOMANAGER       32701
#define PANEL_EMS_UPLINKS       32801
#define PANEL_EMS_EXTDLL        32802
#define PANEL_NOUPLINKAREAS     32901
#define PANEL_NOACTIONS         33001
#define PANEL_DOEXTRACT         33101
#define PANEL_EM_DLLLOAD        33201
#define PANEL_EM_DLLVER         33301
#define PANEL_EM_DLLFUNC        33401
#define PANEL_EM_DLLINT         33501
#define PANEL_EM_CFGNOTF        33601
#define PANEL_EM_INIT           33701
#define PANEL_EM_CFGREAD        33801
#define PANEL_EM_CFGWRITE       33901
#define PANEL_EM_CFGFORMAT      34001
#define PANEL_EM_CFGLINKED      34101
#define PANEL_EM_CFGUNLINKED    34201
#define PANEL_UPLINK            34301
#define PANEL_EM_NOPASS         34401
#define PANEL_DELUPLINK         34501
#define PANEL_INITERROR         34601
#define PANEL_EM_APPENDAREAS    34701
#define PANEL_SEARCH            34801
#define PANEL_PRINTSETUP        34901
#define PANEL_PS_LIST           34910
#define PANEL_PS_BORDERS        34911
#define PANEL_PS_FONTS          34912
#define PANEL_PS_OUTPUT         34913
#define PANEL_TOOLBARCONFIG     35001
#define PANEL_REQ_ADDLIST       35101
#define PANEL_REQ_DELLIST       35201
#define PANEL_REQ_ADDFILE       35301
#define PANEL_REQ_SETPASS       35401
#define PANEL_REQ_ERROR         35501
#define PANEL_CFGDLLERROR       35601

