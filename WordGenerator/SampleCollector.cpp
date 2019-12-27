//
// Created by mateusz on 17.11.19.
//

#include <iostream>
#include "SampleCollector.h"
#include "../HashMap/HashMap.cpp"

void SampleCollector::collectSample() {
    auto *textSample = const_cast<wchar_t *>(L"W północno wschodnim kącie Afryki leży Egipt, ojczyzna najstarszej cywilizacji w świecie. Przed trzema, czterema, a nawet pięcioma tysiącami lat, kiedy w środkowej Europie odziani w surowe skóry barbarzyńcy kryli się po jaskiniach, Egipt już posiadał wysoką organizację społeczną, rolnictwo, rzemiosła i literaturę. Nade wszystko zaś wykonywał olbrzymie prace inżynierskie i wznosił kolosalne budowle, których szczątki budzą podziw w technikach nowożytnych. Egipt jest to żyzny wąwóz między pustynią Libijską i Arabską. Głębokość jego wynosi kilkaset metrów, długość sto trzydzieści mil, średnia szerokość zaledwo milę. Od zachodu łagodne, ale nagie wzgórza libijskie, od wschodu strome i popękane skały arabskie są ścianami tego korytarza, którego dnem płynie rzeka Nil. Z biegiem rzeki, na północ, ściany wąwozu zniżają się, a w odległości dwudziestu pięciu mil od Morza Śródziemnego nagle rozchodzą się, i Nil, zamiast płynąć ciasnym korytarzem, rozlewa się kilkoma ramionami po obszernej równinie mającej kształt trójkąta. Trójkąt ten, zwany Deltą Nilową, ma za podstawę brzeg Morza Śródziemnego, zaś u wierzchołka, przy wyjściu rzeki z wąwozu, miasto Kair tudzież gruzy przedwiekowej stolicy, Memfisu. Gdyby kto mógł wznieść się o dwadzieścia mil w górę i stamtąd spojrzeć na Egipt, zobaczyłby dziwną formę kraju i osobliwe zmiany jego koloru. Z tej wysokości, na tle białych i pomarańczowych piasków, Egipt wyglądałby jak wąż, który w energicznych skrętach posuwa się przez pustynię do Morza Śródziemnego i już zanurzył w nim trójkątną głowę, ozdobioną dwojgiem oczu: lewym Aleksandrią, prawym Damiettą. Długi ten wąż w październiku, kiedy Nil zalewa cały Egipt, miałby błękitną barwę wody. W lutym, kiedy miejsce opadających wód zajmuje wiosenna roślinność, wąż byłby zielony, z błękitną pręgą wzdłuż ciała i mnóstwem błękitnych żyłek na głowie, z powodu kanałów, które przecinają Deltę. W marcu błękitna pręga zwęziłaby się, a ciało węża, skutkiem dojrzewania zbóż, przybrałoby kolor złoty. Wreszcie w początkach czerwca Nilowa pręga byłaby bardzo cienka, a ciało węża zrobiłoby się szare, jakby przysłonięte krepą skutkiem suszy i pyłu. Zasadniczą właściwością klimatu egipskiego jest upał: w styczniu bywa dziesięć stopni ciepła, w sierpniu dwadzieścia siedem; niekiedy gorąco sięga czterdziestu siedmiu stopni, co u nas odpowiada temperaturze rzymskiej łaźni. Nadto w sąsiedztwie Morza Śródziemnego, nad Deltą, deszcz pada ledwie dziesięć razy na rok, zaś w Górnym Egipcie raz na dziesięć lat. W tych warunkach Egipt, zamiast kolebką cywilizacji, byłby pustynnym wąwozem, jakich pełno wśród Sahary, gdyby co roku nie wskrzeszały go wody świętej rzeki Nilu. Od końca czerwca do końca września Nil przybiera i zalewa prawie cały Egipt; od końca października do końca maja roku następnego opada i stopniowo odsłania coraz niższe płaty gruntu. Wody rzeki są tak przesycone mineralnymi i organicznymi szczątkami, że kolor ich staje się brunatnawym, więc w miarę opadania wód na zalanych gruntach osadza się muł żyzny, który zastępuje najlepsze nawozy. Ten muł i gorący klimat sprawia, że Egipcjanin, zamknięty między pustyniami, może mieć trzy zbiory w ciągu roku i około trzystu ziaren z jednego ziarna zasiewu. Ale Egipt nie jest jednostajną płaszczyzną, lecz krajem falistym; niektóre jego grunta tylko przez dwa lub trzy miesiące piją błogosławione wody, inne nie widzą jej przez cały rok; wylew bowiem nie dosięga pewnych punktów. Niezależnie od tego trafiają się lata małych przyborów, a wówczas część Egiptu nie otrzymuje zapładniającego mułu. Nareszcie, skutkiem upałów, ziemia prędko wysycha i trzeba ją zlewać jak w doniczkach. Wszystkie te okoliczności sprawiły, że naród zamieszkujący dolinę Nilu musiał albo zginąć, jeżeli był słabym, albo uregulować wody, jeżeli posiadał geniusz. Starożytni Egipcjanie mieli geniusz, więc stworzyli cywilizację. Już przed sześcioma tysiącami lat spostrzegli, że Nil przybiera, gdy słońce ukazuje się pod gwiazdą Syriuszem, a zaczyna opadać, gdy słońce zbliża się do gwiazdozbioru Wagi. Spostrzeżenia te popchnęły ich do obserwacji astronomicznych i mierzenia czasu. Aby zachować wodę przez cały rok, wykopali w swoim kraju długą na kilka tysięcy mil sieć kanałów. Aby zaś ubezpieczyć się od nadmiernych wylewów, wznosili potężne tamy i kopali zbiorniki, spomiędzy których sztuczne jezioro Moeris zajmowało trzysta kilometrów kwadratowych powierzchni, przy dwunastu piętrach głębokości. Nareszcie wzdłuż Nilu i kanałów pobudowali mnóstwo prostych, ale skutecznych machin hydraulicznych, za pomocą których można było czerpać wodę i wylewać ją na pola położone o jedno lub dwa piętra wyżej. I jeszcze, jako dopełnienie wszystkiego, trzeba było co roku oczyszczać zamulone kanały, poprawiać tamy i budować wysoko położone drogi dla wojsk, które w każdej porze musiały odbywać marsze. Te olbrzymie prace wymagały, obok wiadomości z astronomii, miernictwa, mechaniki i budownictwa jeszcze doskonałej organizacji. Czy to umocnienie grobli, czy oczyszczenie kanałów musiało być robione i zrobione w pewnym czasie, na wielkiej przestrzeni. Stąd powstała konieczność utworzenia armii robotniczej, liczącej dziesiątki tysięcy głów, działającej w oznaczonym celu i pod jednym kierunkiem. Armii, która musiała mieć mnóstwo małych i wielkich dowódców, mnóstwo oddziałów wykonywających rozmaite prace, skierowane do jednolitego rezultatu, armii, która potrzebowała wiele żywności, środków i sił pomocniczych. Egipt zdobył się na taką armię pracowników i jej zawdzięcza swoje wiekopomne dzieła. Zdaje się, że stworzyli ją, a następnie nakreślali jej plany kapłani, czyli mędrcy egipscy; rozkazywali zaś królowie, czyli faraonowie. Skutkiem tego naród egipski w czasach wielkości tworzył jakby jedną osobę, w której stan kapłański odegrywał rolę myśli, faraon był wolą, lud ciałem, a posłuszeństwo cementem. Tym sposobem sama przyroda Egiptu, domagająca się wielkiej, ciągłej i porządnej roboty, stworzyła szkielet społecznej organizacji tego kraju: lud pracował, faraon kierował, kapłani układali plany. I jak długo te trzy czynniki dążyły zgodnie do celów wskazanych przez naturę, tak długo społeczność mogła kwitnąć i dokonywać swoich dzieł wiecznotrwałych. Łagodny i wesoły, a bynajmniej nie wojowniczy lud egipski dzielił się na dwie klasy: rolników i rzemieślników. Między rolnikami musieli być jacyś właściciele drobnych kawałków gruntu, przeważnie jednak byli dzierżawcy ziem należących do faraona, kapłanów i arystokracji. Rzemieślnicy wyrabiający odzież, sprzęty, naczynia i narzędzia byli samodzielnymi; pracujący zaś przy wielkich budowlach tworzyli jakby armię. Każda z tych specjalności, a głównie budownictwo wymagało sił pociągowych i motorów: ktoś musiał czerpać po całych dniach wodę z kanałów lub przenosić kamienie z kopalń tam, gdzie były potrzebne. Te najcięższe mechaniczne zajęcia, a przede wszystkim prace w kamieniołomach, wykonywali przestępcy skazani przez sądy lub schwytani na wojnie niewolnicy. Rodowici Egipcjanie mieli barwę skóry miedzianą, czym chełpili się, gardząc jednocześnie czarnymi Etiopami, żółtymi Semitami i białymi Europejczykami. Ten kolor skóry, pozwalający odróżnić swojego od obcego, przyczyniał się do utrzymania narodowej jedności silniej aniżeli religia, którą można przyjąć, albo język, którego można się wyuczyć. Z biegiem czasu jednak, kiedy państwowy gmach zaczął pękać, do kraju coraz liczniej napływały obce pierwiastki. Osłabiały one spójność, rozsadzały społeczeństwo, a nareszcie zalały i rozpuściły w sobie pierwotnych mieszkańców kraju. Faraon rządził państwem przy pomocy armii stałej i milicji czy policji tudzież mnóstwa urzędników, z których powoli utworzyła się arystokracja rodowa. Tytularnie był on prawodawcą, naczelnym wodzem, najbogatszym właścicielem, najwyższym sędzią, kapłanem, a nawet synem bożym i bogiem. Cześć boską odbierał nie tylko od ludu i urzędników, ale niekiedy sam sobie stawiał ołtarze i przed swymi własnymi wizerunkami palił kadzidła. Obok faraonów, a bardzo często ponad nimi stali kapłani: był to zakon mędrców kierujący losami kraju.Dziś prawie nie można wyobrazić sobie nadzwyczajnej roli, jaką stan kapłański odegrywał w Egipcie. Byli oni nauczycielami młodych pokoleń, wróżbitami, a więc doradcami ludzi dorosłych, sędziami zmarłych, którym ich wola i wiedza gwarantowała nieśmiertelność. Nie tylko spełniali drobiazgowe obrządki religijne przy bogach i faraonach, ale jeszcze leczyli chorych jako lekarze, wpływali na bieg robót publicznych jako inżynierowie tudzież na politykę jako astrologowie, a nade wszystko znawcy własnego kraju i jego sąsiadów. W historii Egiptu pierwszorzędne znaczenie mają stosunki, jakie istniały między stanem kapłańskim a faraonami. Najczęściej faraon ulegał kapłanom, składał bogom hojne ofiary i wznosił świątynie. Wówczas żył długo, a jego imię i wizerunki, ryte na pomnikach, przechodziły od pokolenia do pokolenia, pełne chwały. Wielu jednak faraonów panowało krótko, a niektórych znikały nie tylko czyny, ale nawet nazwiska. Parę razy zaś trafiło się, że upadała dynastia, a klaff, czapkę faraonów otoczoną wężem, przywdziewał kapłan. Egipt rozwijał się, dopóki jednolity naród, energiczni królowie i mądrzy kapłani współdziałali sobie dla pomyślności ogółu. Lecz nadeszła epoka, że lud skutkiem wojen zmniejszył się liczebnie, w ucisku i zdzierstwie utracił siły, napływ zaś obcych przybyszów podkopał rasową jedność. A gdy jeszcze w powodzi azjatyckiego zbytku utonęła energia faraonów i mądrość kapłanów, i dwie te potęgi rozpoczęły między sobą walkę o monopol obdzierania ludu, wówczas Egipt dostał się pod władzę cudzoziemców, i światło cywilizacji przez kilka tysięcy lat płonące nad Nilem zagasło. U ich stóp, w głębi, leżała żyzna dolina mająca formę wideł, których rogi kryły się między skałami. W jednym rogu widać było kilka chat dla służby i ładny domek właściciela czy rządcy. Rosły tu palmy, wino, oliwki, drzewa figowe z powietrznymi korzeniami, cyprysy, nawet młode baobaby. Środkiem płynęła struga wody, zaś na stokach wzgórz, co kilkaset kroków, widać było nieduże sadzawki. Pamiętaj, że cię noc zaskoczy i nie trafisz do domu, w którym wszyscy ci usługują; albo przyleci z pustyni rudy jastrząb i poszarpie ci serce. Wtedy na próżno będziesz wołała twojej pani, jak teraz ja ciebie… Odezwijże się, bo rozgniewam się i odejdę, a ty będziesz musiała wracać za mną piechotą. Książę, zamiast patrzeć, wpadł na ścieżkę i zabiegł drogę śpiewającej. Było to istotnie piękne dziewczę z greckimi rysami twarzy i cerą słoniowej kości. Spod welonu na głowie wyglądały ogromne, czarne włosy, skręcone w węzeł. Miała na sobie białą szatę powłóczystą, którą z jednej strony unosiła ręką; pod przejrzystą zasłoną widać było dziewicze piersi, z kształtu podobne do jabłek. Następca tronu i jego towarzysz biegli z ćwierć godziny po skalistym grzbiecie wzgórza, coraz bliżej słysząc trąbki, które wciąż gwałtowniej i gwałtowniej wygrywały alarm. Nareszcie znaleźli się w miejscu, skąd można było ogarnąć wzrokiem całą okolicę. Otóż w tym punkcie działo się coś niezwykłego. Grecy z machinami stali bezczynnie niedaleko połączenia obu wąwozów; lecz na samym połączeniu, między szosą a sztabem następcy, wyciągnęły się cztery gęste szeregi jakiegoś innego wojska, niby cztery płoty najeżone iskrzącymi włóczniami. Manewry uznano za skończone. Następca tronu w towarzystwie ministra i wodzów pojechał do wojsk pod Pi Bailos, przywitał weteranów Nitagera i pożegnał swoje pułki, rozkazując im iść na wschód i życząc powodzenia. Następnie otoczony wielką świtą wracał szosą do Memfis, wśród tłumów z ziemi Gosen, które z zielonymi gałązkami i w świątecznych szatach pozdrawiały zwycięzcę. Przed oczyma wciąż stał mu obraz samobójcy, a w sercu nurtowało uczucie, że temu pogardzonemu niewolnikowi stała się wielka krzywda. Tak niezmierna krzywda, że nad nią mógł zastanawiać się nawet on, syn i następca faraona. Nieustraszony bojownik nie wydał jęku, owszem nucił pieśń żołnierską, a po ukończeniu ceremonii sam chciał się podnieść. Ale schorzałe nogi odmówiły mu posłuszeństwa. Więc padł twarzą w piasek i musiano go odwieźć do Memfisu na dwukolnym wozie, na którym leżąc i uśmiechając się do żołnierzy rozmyślał, że nie tak prędko zmienia się wiatr w Dolnym Egipcie jak fortuna w życiu biednego oficera. W miarę jak świta następcy tronu zbliżała się do Memfis, słońce pochylało się ku zachodowi, a od niezliczonych kanałów i dalekiego morza zrywał się wiatr nasycony chłodną wilgocią. Szosa znowu zbliżyła się do żyznych okolic, a na polach i w zaroślach było widać nieprzerwane szeregi ludzi pracujących, choć na pustynię już padał różowy blask, a szczyty gór paliły się płomieniem. Czerwony krąg słońca już dotknął piasków zachodniej pustyni. Ramzes pożegał wojsko i galopem pocwałował do Memfis, a jego dostojność Herhor, wśród radosnych okrzyków, wsiadł do lektyki i również kazał wyprzedzić maszerujące oddziały.*");
    wchar_t previous, current;
    bool beginning = true;
    int i = 0;
    do
    {
        current = static_cast<wchar_t>(towlower(static_cast<wint_t>(textSample[i])));
        if(beginning)
        {
            firstLetter[current]++;
            beginning = false;
            wordCount++;
        }
        else
        {
            if(current == L' ' || current == L'.' || current == L';' || current == L',' || current == L':')
            {
                beginning = true;
                i++;
                chooseMap(previous, L'*');
                continue;
            }
            chooseMap(previous, current);
        }
        previous = current;
        i++;
    }while (textSample[i] != L'*');

}

void SampleCollector::calculateProbabilities() {
    auto *letters = const_cast<wchar_t *>(L"aąbcćdeęfghijklłmnńoóprsśtuwyzźż* ");
    int index = 0;
    double charCount[40] = {0};
    wchar_t current;

    do
        firstLetter[towlower(static_cast<wint_t>(letters[index++]))] /= wordCount;
    while(letters[index + 1] != '\000');
    index = 0;

    do{
        current = static_cast<wchar_t>(towlower(static_cast<wint_t>(letters[index++])));
        int index2 = 0;
        charCount[index2++] += afterA.valueOf(current);
        charCount[index2++] += afterAA.valueOf(current);
        charCount[index2++] += afterB.valueOf(current);
        charCount[index2++] += afterC.valueOf(current);
        charCount[index2++] += afterCC.valueOf(current);
        charCount[index2++] += afterD.valueOf(current);
        charCount[index2++] += afterE.valueOf(current);
        charCount[index2++] += afterEE.valueOf(current);
        charCount[index2++] += afterF.valueOf(current);
        charCount[index2++] += afterG.valueOf(current);
        charCount[index2++] += afterH.valueOf(current);
        charCount[index2++] += afterI.valueOf(current);
        charCount[index2++] += afterJ.valueOf(current);
        charCount[index2++] += afterK.valueOf(current);
        charCount[index2++] += afterL.valueOf(current);
        charCount[index2++] += afterLL.valueOf(current);
        charCount[index2++] += afterM.valueOf(current);
        charCount[index2++] += afterN.valueOf(current);
        charCount[index2++] += afterNN.valueOf(current);
        charCount[index2++] += afterO.valueOf(current);
        charCount[index2++] += afterOO.valueOf(current);
        charCount[index2++] += afterP.valueOf(current);
        charCount[index2++] += afterR.valueOf(current);
        charCount[index2++] += afterS.valueOf(current);
        charCount[index2++] += afterSS.valueOf(current);
        charCount[index2++] += afterT.valueOf(current);
        charCount[index2++] += afterU.valueOf(current);
        charCount[index2++] += afterW.valueOf(current);
        charCount[index2++] += afterY.valueOf(current);
        charCount[index2++] += afterZ.valueOf(current);
        charCount[index2++] += afterZZ.valueOf(current);
        charCount[index2] += afterZZZ.valueOf(current);
    }while(letters[index+1] != '\000');
    index = 0;
    do {
        current = static_cast<wchar_t>(towlower(static_cast<wint_t>(letters[index++])));
        int index2 = 0;
        afterA[current] /= charCount[index2++];
        afterAA[current] /= charCount[index2++];
        afterB[current] /= charCount[index2++];
        afterC[current] /= charCount[index2++];
        afterCC[current] /= charCount[index2++];
        afterD[current] /= charCount[index2++];
        afterE[current] /= charCount[index2++];
        afterEE[current] /= charCount[index2++];
        afterF[current] /= charCount[index2++];
        afterG[current] /= charCount[index2++];
        afterH[current] /= charCount[index2++];
        afterI[current] /= charCount[index2++];
        afterJ[current] /= charCount[index2++];
        afterK[current] /= charCount[index2++];
        afterL[current] /= charCount[index2++];
        afterLL[current] /= charCount[index2++];
        afterM[current] /= charCount[index2++];
        afterN[current] /= charCount[index2++];
        afterNN[current] /= charCount[index2++];
        afterO[current] /= charCount[index2++];
        afterOO[current] /= charCount[index2++];
        afterP[current] /= charCount[index2++];
        afterR[current] /= charCount[index2++];
        afterS[current] /= charCount[index2++];
        afterSS[current] /= charCount[index2++];
        afterT[current] /= charCount[index2++];
        afterU[current] /= charCount[index2++];
        afterW[current] /= charCount[index2++];
        afterY[current] /= charCount[index2++];
        afterZ[current] /= charCount[index2++];
        afterZZ[current] /= charCount[index2++];
        afterZZZ[current] /= charCount[index2];
    }while(letters[index+1] != '\000');

    for(int i = 0; i<32; i++)
        std::wcout<<i+1<<": "<<letters[i]<<"  "<<charCount[i]<<endl;
}

void SampleCollector::chooseMap(wchar_t previous, wchar_t current){
    switch (previous) {
        case L'a': afterA[current]  = afterA.valueOf(current)+1; break;
        case L'ą': afterAA[current] = afterAA.valueOf(current)+1; break;
        case L'b': afterB[current]  = afterB.valueOf(current)+1;break;
        case L'c': afterC[current]  = afterC.valueOf(current)+1;break;
        case L'ć': afterCC[current] = afterCC.valueOf(current)+1;break;
        case L'd': afterD[current]  = afterD.valueOf(current)+1;break;
        case L'e': afterE[current]  = afterE.valueOf(current)+1;break;
        case L'ę': afterEE[current] = afterEE.valueOf(current)+1;break;
        case L'f': afterF[current]  = afterF.valueOf(current)+1;break;
        case L'g': afterG[current]  = afterG.valueOf(current)+1;break;
        case L'h': afterH[current]  = afterH.valueOf(current)+1;break;
        case L'i': afterI[current]  = afterI.valueOf(current)+1;break;
        case L'j': afterJ[current]  = afterJ.valueOf(current)+1;break;
        case L'k': afterK[current]  = afterK.valueOf(current)+1;break;
        case L'l': afterL[current]  = afterL.valueOf(current)+1;break;
        case L'ł': afterLL[current] = afterLL.valueOf(current)+1;break;
        case L'm': afterM[current]  = afterM.valueOf(current)+1;break;
        case L'n': afterN[current]  = afterN.valueOf(current)+1;break;
        case L'ń': afterNN[current] = afterNN.valueOf(current)+1;break;
        case L'o': afterO[current]  = afterO.valueOf(current)+1;break;
        case L'ó': afterOO[current] = afterOO.valueOf(current)+1;break;
        case L'p': afterP[current]  = afterP.valueOf(current)+1;break;
        case L'r': afterR[current]  = afterR.valueOf(current)+1;break;
        case L's': afterS[current]  = afterS.valueOf(current)+1;break;
        case L'ś': afterSS[current] = afterSS.valueOf(current)+1;break;
        case L't': afterT[current]  = afterT.valueOf(current)+1;break;
        case L'u': afterU[current]  = afterU.valueOf(current)+1;break;
        case L'w': afterW[current]  = afterW.valueOf(current)+1;break;
        case L'y': afterY[current]  = afterY.valueOf(current)+1;break;
        case L'z': afterZ[current]  = afterZ.valueOf(current)+1;break;
        case L'ź': afterZZ[current] = afterZZ.valueOf(current)+1;break; //ź
        case L'ż': afterZZZ[current]= afterZZZ.valueOf(current)+1;break;//ż
        default: ;
    }
}

SampleCollector::SampleCollector() {
    wordCount = 0;
}

