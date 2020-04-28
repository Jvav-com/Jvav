/*
    Jvav Programmer Ver.02w05c Snapshot
    By 30266
    Compilation time 2020-04-16 21:00
*/
#include <iostream>
#include <fstream>
#include <windows.h>
#include <iso646.h>
using namespace std;
int main()
{
    cout << "Initializing program...\n";
    string command, type, inputcharacter, language = "简体中文";
    cout << "Configuring the online update service...\n";
    system("del upgrade.txt");
    system("cls");
    /*en_main*/
en:
    if (language == "English") {
        cout << "-----------------------------------------------\n";
        cout << "| Jvav language Ver.1.2 Pre3 branch: xxxxj_up |\n";
        cout << "| PresenterZhangHaoYang   programmer xxxxj_up |\n";
        cout << "| Enter'help'to get help!                     |\n";
        cout << "| Online push updates are now supported!      |\n";
        cout << "-----------------------------------------------\n";
    }
    else {
        cout << "--------------------------------------------\n";
        cout << "| Jvav语言 版本 1.2 预览版3 分支：xxxxj_up |\n";
        cout << "| 提出者：张浩洋大师      编写者：xxxxj_up |\n";
        cout << "| 通过输入'帮助'/'help'来获得帮助          |\n";
        cout << "| 现已支持在线推送更新！                   |\n";
        cout << "--------------------------------------------\n";
    }
en_main:
    cout << "Jvav>";
    cin >> command;
    if (command == "help" or command == "帮助") {
        if (language == "English") {
            cout << "----Jvav help------Page(1/1)---\n";
            cout << "  help:Get help\n  leave:Exit Jvav\n  output:Output characters\n  input:Input characters\n  upgrade:Online detection of version updates\n  language:setting the program language\n  info:Jvav information\n";
            cout << "----Jvav help------Page(1/1)---\n";
            goto en_main;
        }
        else {
            cout << "----Jvav帮助---第(1/1)页----\n";
            cout << "  帮助/help:获取帮助\n  退出/leave:退出Jvav\n  输出/output:输出字符\n  输入/input:输入字符以便调用\n  更新/upgrade:在线检测版本更新\n  语言/language:设置Jvav的语言\n  关于/info:获取关于Jvav的信息\n";
            cout << "----Jvav帮助---第(1/1)页----\n";
            goto en_main;
        }
    }
    else if (command == "leave" or command == "退出") {
        if (language == "English") {
            cout << "Are you sure to leave jvav?(y/n)";
        }
        else {
            cout << "你确定要退出Jvav吗？(是/否)";
        }
        string L;
        cin >> L;
        if (L == "y" or L == "是") {
            return 0;
        }
        else {
            goto en_main;
        }
    }
    else if (command == "output" or command == "输出") {
        if (language == "English") {
            cout << "Jvav>output>";
        }
        else {
            cout << "Jvav>输出>";
        }
        cin >> type;
        cout << type << endl;
        goto en_main;
    }
    else if (command == "info" or command == "关于") {
        if (language == "English") {
            cout << "Jvav Programm Ver.1.2 Pre1\nIt's just a joke, but we still make it, and the joke was first brought by Zhang Haoyang.\nThis version supports running away from jdk.\nThe person writing the program is 30266.\n";
        }
        else {
            cout << "Jvav编程器，版本为1.2预览版1.\n这只是一个梗，但是我们依然把它变成了现实.最早是张浩洋提出的这个梗.\n该版本支持脱离jdk的运行.\n该程序编写者为30266。\n";
        }
        goto en_main;
    }
    else if (command == "input" or command == "输入") {
        if (language == "English") {
            cout << "Jvav>input>";
            cin >> inputcharacter;
        }
        else {
            cout << "Jvav>输入>";
            cin >> inputcharacter;
        }
        goto en_main;
    }
    else if (command == "upgrade" or command == "更新") {
        if (language == "English") {
            cout << "Jvav>upgrade>Getting a version list...\n";
        }
        else {
            cout << "Jvav>更新>正在获取版本列表...\n";
        }
        goto upgrade;
    }
    else if (command == "language" or command == "语言") {
        string language_bak = language;
        if (language == "English") {
            cout << "Please enter the setting language(English/简体中文):";
        }
        else {
            cout << "请输入您要切换的语言(简体中文/English):";
        }
        cin >> language;
        if (language == "English") {
            goto en;
        }
        else if (language == "简体中文") {
            system("cls");
            goto en;
        }
        else {
            if (language == "English") {
                cout << "Unknown language.\n";
            }
            else {
                cout << "未知的语言。\n";
            }
            language = language_bak;
            goto en_main;
        }
    }
    else {
        if (language == "English") {
            cout << "Unknown command\n";
        }
        else {
            cout << "未知的命令！\n";
        }
        goto en_main;
    }
    /*upgrade*/
upgrade:
    system("java -jar upgrade.jar > upgrade.txt");
    ifstream readFile("upgrade.txt");
    int ret;
    readFile >> ret;
    readFile.close();
    if (ret == -1) {
        if (language == "English") {
            cout << "Jvav>upgrade>Error! The update failed! Because the version list cannot be obtained on the authentication server!\n";
            goto en_main;
        }
        else {
            cout << "Jvav>更新>错误！无法从认证服务器获取版本列表！\n";
            goto en_main;
        }
    }
    else if (ret > 6) {
        if (language == "English") {
            cout << "Jvav>upgrade>Updated versionavailable for upgrades, please go to https://30266-official.github.io/updates/Jvav.zip download!\n";
            goto en_main;
        }
        else {
            cout << "有更新版本可供升级，请前往https://30266-official.github.io/updates/Jvav.zip下载！\n";
            goto en_main;
        }
    }
    else if (ret == 6) {
        if (language == "English") {
            cout << "Congratulations! You've upgraded to the latest version!\n";
            goto en_main;
        }
        else {
            cout << "恭喜你！你已升级至最新版本！\n";
            goto en_main;
        }
    }
    else {
        if (language == "English") {
            cout << "Jvav>upgrade>Error!We can't get a version list because your version is coming from a future version, so we don't support it.\n";
            goto en_main;
            cout << ret;
        }
        else {
            cout << "Jvav>更新>错误！我们无法获取版本列表，因为您的版本是来自未来的版本，故我们不提供支持。\n";
            goto en_main;
        }
    }
}