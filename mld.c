#include <stdint.h>

typedef struct EFLInfo EFLInfo; 
typedef struct TempRegion TempRegion; 
struct EFLInfo {
    uint32_t sectionHeader; // セクションヘッダtableのaddr
};

EFLInfo readELFHeader() {
}

// それぞれのsectionを読んで,そのままtmpSectionsに書き写す。
// ただし、特定のセクション(.text, .bss, sym系)だったらそれぞれの処理に分岐.
int readSections(uint32_t sectionHeaderAddr, TempRegion *tmpSections) {}

// programヘッダを作る。readSectionsとは別のTempRegionを作成して、そこに書く.
// sectionの情報がいくらか必要になると思うので、それも引数で渡してる.
int createProgramHeader(TempRegion *tmpProgramHeader, int sectioninfo) {}

// 最後にelfに書いていくものを想定。tmpsectionsとtmpprogramheaderとelfheaderを書いていく想定。
// 書いたbyte数を返す.
int write(int fd, uint32_t offset, int size) {};

int main(int argc, char **argv) {
    return 0;
}