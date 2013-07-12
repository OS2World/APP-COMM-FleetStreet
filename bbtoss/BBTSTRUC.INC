{ Struktur der BBToss Area- und Link-Daten v 2.06}

{ Die Dateien sind prinzipiell wie folgt aufgebaut: }

{   +--------------------+
    | DATEIHEADER-RECORD |  Header vom Typ signrec
    +--------------------+
    | Datensaetze ...    |
    |             ...    |
    +--------------------+
    | DATEIHEADER-RECORD |  Wiederholung des Header-Records vom Anfang
    +--------------------+
}

Const
{$ifdef OS2}
    DataRevisionLevel = $1005;  {6.2.96 area + connected link akas}
{$else}
    DataRevisionLevel = $0005;
{$endif}

{Configfile-Namen}
  bbtosscfg      = 'bbtoss.cfg';   {Grundeinstellungen, Pfade und Flags}

  bbtlinkcfg     = 'bbtlink.bbt';  {Configdatei der Linkdaten (binÑr)}
  bbtareacfg     = 'bbtarea.bbt';  {Configdatei der Areadaten (binÑr)}

  bbtlinkini     = 'bbtlink.ini';  {Linkdaten als Textdatei}
  bbtareaini     = 'bbtarea.ini';  {Areadaten als Textdatei}
  bbtgroupini    = 'bbtgroup.ini'; {neue Group-Cfg, ersetzt BBTGROUP.CFG}

  bbtakacfg      = 'bbtaka.cfg';   {eingene Akas}
  bbtzipcfg      = 'bbtzip.cfg';   {Packer Pfade und Commandlines}
  bbtaliascfg    = 'bbtalias.cfg'; {Aliasnamen}
  bbtuplinkcfg   = 'bbtuplnk.cfg'; {Uplink-Einstellungen}
  bbtuplinkdat   = 'bbtuplnk.bbt';

  bbtroutecfg    = 'bbtroute.cfg'; {Netmail Routing-Einstellungen}
  bbtnewareacfg  = 'bbtnewar.bbt'; {Zwischenspeicher fÅr neu bestellte Areas}
  bbtcrcfile     = 'bbtdupe.bbt';  {CRC Daten fÅr Dupe-Check}
  bbtsayerrfile  = 'bbsayerr.bbt'; {Textfile fÅr Errormsgs BTSayerr}
  bbtlockfile    = 'bbtoss.bsy';   {wird bei Progende gelîscht}

{----- Declarationen fÅr Links und Link-Record---------------------}
{Link Flag-Definitionen fÅr Link-Record}
link_activ        = $00000001;
link_checkpktpwd  = $00000002; {checkpktpwd}
link_sayerror     = $00000004; {automatische Nachricht bei Fehlern}
link_autocreate   = $00000008; {berechtigt zum anlegen neuer Areas}
link_forwardmgr   = $00000010; {Areamgr Requests forwarded zum uplink}
link_packnetmail  = $00000020; {netmail mit einpacken}
link_packholdnet  = $00000040; {netmail mit Hold-Status einpacken}
link_nodailyzip   = $00000080; {Arcmail auffÅllen, nicht tÑglich neue Endung}
link_autoconnect  = $00000100; {link zu neuen Areas automatisch connecten}
link_notify       = $00000200; {send Statusmsgs}
link_fattachok    = $00000400; {link darf f'attach Msgs schicken}
{----- Declarationen fÅr Areas und Area-Record----------------------}
{Arc-Mail Status und AntwortmsgStatus Verwendung in Link-Record}
mailstatus_normal =  0;  {arcmail_status = linkrec.mailstatus and $0F}
mailstatus_hold   =  1;
mailstatus_direct =  2;
mailstatus_crash  =  4;

{mgrmsg_normal  =  0;  {mgrmail_staus = linkrec.mailstatus and $F0}
{mgrmsg_hold    =$10;
mgrmsg_direct  =$20;
mgrmsg_crash   =$40;}

{Area Flags-Definitionen}
area_killseenby  = $00000001; {seen-by zeilen lîschen  }
area_killpath    = $00000002; {path-zeile zurÅcksetzen }
area_chkaka      = $00000008; {prÅfe Absender-Aka jeder Msg}
area_passive     = $00000010; {Area temporÑr passiv    }
area_importseenby= $00000020; {import seenby in msgbase}
area_importpath  = $00000040; {import path in MsgBase  }
area_excludebbs  = $00000080; {nicht in Box exportieren}
area_Pflichtarea = $00000100; {abmelden nicht mîglich  }

type  signstr = array[1..10] of char;  {Keyword in signrec}

const areasign   : signstr = 'BBTAREACFG';
      linksign   : signstr = 'BBTLINKCFG';
      groupsign  : signstr = 'BBTGROUP  ';
      tossersign : signstr = 'BBTOSSGLOB';
      uplinksign : signstr = 'BBTUPLINKS';
      lngsign    : signstr = 'BBTOSSLANG';

type signrec = record     {Vorspann in Bit-Cfg Files}
        sign : signstr;   {bbtarea.bbt & bbtlink.bbt}
        rev  : Smallword;
        count: Smallword;
        end;

String60 = String[60];

{
aktuelle Definitionen, in anderer Unit declariert ....

Pathstr  = String[79];

Addrtype = record
   Zone,
   Net,
   Node,
   Point : Word;
   end;
}

{verwendete Zeichen fÅr Packer -> LinkFileRec.Zipper}
{      Z = ZIP     }
{      A = ARC     }
{      L = LHA/LZH }
{      J = ARJ     }
{      S = SQZ     }
{      R = RAR     }
{      H = HYP     }
{      O = ZOO     }
{      U = UC2     }

LinkFileRec = Record
   Sysop   : string[40];   {Sysop-Name}
   NodeNr  : Addrtype;
   UseAka  : Addrtype;     {Absender Aka fÅr PKT-Files}
   PktPwd  : String[9];    {Packet Password}
   MgrPwd  : String[15];   {Areamgr Password}
   Level   : smallWord;         {Level des Links}
   Zipper  : char;         {Packer fÅr AcrMails Z=Zip J=ARJ A=ARC L=LHA...}
   Group   : String[15];   {Buchstabe der angeschlossenen Gruppen A..Z,a..z}
   Mailstatus: byte;       {normal hold direct crash..siehe arcmail_xxx}
                           {Arcmail = Mailstatus and $F, Msg = mailstatus and $F0}
   Capability: smallWord;       {Packetformat, Type 2 type 2+ usw. (aktuell not used)}
   Flags   : longint;      {Link-Flags, siehe link_xxxx Konstanten}
   Flow    : longint;      {Anzahl gesendeter Echomails (aktuell not used)}
   KB      : longint;      {Anzahl Bytes gesendeter Echomails}
   end;

{
Aufbau Area-Datei
   signrec
      areafilerec
        array [1..area.storedlinks] of addrtype;
      areafilerec
        array [1..area.storedlinks] of addrtype;
     ...
     ...
   signrec
dem Areafilerec folgen also storedlinks  Integer-Zahlen  welche den
x-ten Link im Linkfile bezeichnet (1. Link im Linkfile = Nr. 1}

{verwendete Zeichen fÅr Messagebasetype -> AreaFileRec.Basetyp}
{   E = EzyCom              }
{   H = Hudson              }
{   J = JAM                 }
{   N = Fido Netmail *.MSG  }
{   S = Squish              }
{   P = Passthrough         }

{verwendete Zeichen fÅr Area-Typ -> AreaFileRec.Typ}
{   B = Badmail Area                  }
{   D = Dupemail Area                 }
{   E = Echo Area                     }
{   L = lokales Area (also ohne Links)}
{   N = Netmail                       }
{   * = neu bestellt per Uplinkmgr    }

AreaFileRec = Record
   TagName    : String60;  {Echo-Area Name}
   Nr         : smallword;      {Nr. des Messagearea (in der Mailbox)}
   MPath      : pathstr;   {Msgbasename, bei Hudson '' (mu· mit \ enden)}
   BaseTyp    : char;      {Msg-Basetype  J=Jam H=Hudson S=Squish N=*.msg}
   Group      : char;      {Gruppe des Areas  A..Z,a..z,0..9}
   Typ        : char;      {E=Echo L=Lokal B=Bad D=Dupe}
   MainAka    : addrtype;  {eigene Aka fÅr das Area}
   Flags      : longint;   {Area-Flags}
   WriteLevel : smallword;      {Schreiblevel }
   ReadLevel  : smallword;      {Lese/Bestell-Level}
   MaxMsgs    : smallword;      {max Anzahl Msgs fÅr Clean}
   MinMsgs    : smallword;      {min Anzahl Msgs fÅr Clean}
   DaysOld    : smallword;      {Anzahl Tage fÅr Clean}
   DaysRcvd   : smallWord;      {Anzahl Tage fÅr Clean}
   Flow       : Longint;   {Anzahl verarbeiteter Msgs seit StatDate}
   TodayFlow  : Longint;   {Anzahl heute verarbeiteter Msgs}
   Desc       : String60;  {Beschreibung fÅr Area}
   DOrigin    : String60;  {Origin Zeile}
   StatDate   : Longint;   {StatistikDate (Julian)}
   RuleFile   : PathStr;   {Name der Arearule Datei}
   StoredLinks: smallword;      {anzahl aktuell angeschlossener Links}
{ gefolgt von   Storedlinks * Size(Addrtype)  Bytes, pro angeschlossenem
  Link eine Aka (= 8 Byte)}
   end;

PGroupRec = ^GroupRec;
GroupRec = record
   tag         : char;    {Gruppen Kennbuchstabe}
   Desc        : String;  {Beschreibung}
   Uplink      : addrtype;{Uplink-Aka}
   AreaBaseTyp : char;    {Areabasetyp fÅr autom. anlegen}
   Areapath    : String;  {Verzeichnis fÅr autom. erzeugte Areas}
   Startarea   : smallWord;    {freie Areanummer suchen ab...}
   RulePath    : pathstr; {Verzeichnis der Rule-Files}
   end;

tosserrec = record
   RegName    : string[80]; {registrier Daten}
   regkey     : string[15];

{Arbeits-Pfade  aus *.cfg Textfile}
   inboundDir        : PathStr; {secure inbound path}
   unsecinbounddir   : pathstr; {unsecure inbound path}
   OutBoundDir       : PathStr; {outbound fÅr ARCMail-Archive (und pkts)}
   tmpoutbounddir    : Pathstr; {tmpoutbound fÅr PKT an downlink}
   SecPktDir         : PathStr; {local inbound path}

   MsgDir            : PathStr; {Netmail-Folder *.MSG}
   HMBDir            : PathStr; {Hudson Path}
   Ezymsgdir         : PathStr; {pfad zur Ezycom Messagebase}
   WorkDir           : PathStr; {Arbeitspfad/Tempinbound}
   LogPath           : PathStr; {Logdateipath}
   SemaDir           : PathStr; {semaphoredir fÅr Mailer}
   Echotosslog       : PathStr; {Echotoss.log file fÅr scan}
   jamlog            : PathStr; {Echomail.jam und Netmail.jam Dir fÅr scan}

   MailerDir         : PathStr; {Haupdir des Mailers}
   BoxDir            : PathStr; {haupdir der Box}
   PackerDir         : PathStr; {Default Pfad zu den Packern}

   DupeMax      : Longint;    {Anzahl duperecords}
   DupeDays     : SmallWord;  {Msg-Alter in Tagen wo sie immer als Bad gilt}
   MaxTime      : SmallWord;  {maximale Tossdauer in Minuten}

   flags        : longint;    {^^^^^  das ist schlecht gelîst, da idx aus
                                    fremder unit kommt}

   Mailer        : SmallWord; {Kennung fÅr Mailertyp}
   Mailbox       : SmallWord; {Kennung fÅr Mailbox}

   debugmode     : boolean;   {Debugmodus, jeden Fehler ausgeben}
   loglevel      : SmallWord;
   nozip         : boolean;   {in dpmi nicht sofort beim tossen zippen sondern per ZIP-Befehl}
   tmaxfilesopen : Smallword; {maximal gleichzeitig zu îffnende Files}
   memavaillimit : SmallWord; {memavail minwert bei dem gespeichert wird}
   maxpktfilesize: Longint ;  {in Byte}
   maxzipfilesize: Longint ;  {Arcmail-Size in Byte}
   mindiskspace  : Longint ;  {min. freier Plattenplatz}
   end;

