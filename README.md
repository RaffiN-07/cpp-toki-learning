# Belajar C++ Dasar (TOKI Learning Center)

Dokumentasi perjalanan belajar pemrograman C++ dari dasar, mengikuti materi di [TOKI Learning Center](https://tlx.toki.id). Tujuan akhirnya adalah melanjutkan ke dunia **competitive programming**.

Repo ini berisi latihan soal dan contoh program per bab, disusun berurutan sesuai materi.

## Cara Compile dan Menjalankan

Compile memakai `Makefile` dengan flag `-std=c++17 -Wall -Wextra -O2`. Jalankan dari folder paling atas repo:

```bash
make 1_Variabel_TipeData/main.cpp     # compile -> hasilnya 1_Variabel_TipeData/main
./1_Variabel_TipeData/main            # jalankan

make                                  # compile semua file .cpp sekaligus
make clean                            # hapus semua binary hasil compile
make -n clean                         # cek dulu file apa yang akan dihapus
```

Compile manual tanpa Makefile:

```bash
g++ main.cpp -o main
```

## Membersihkan Binary

- `make clean` menghapus binary yang punya pasangan file `.cpp`.
- `del_BinaryFile.sh` menghapus semua file binary (ELF) di folder tempat script dijalankan, termasuk binary yatim yang `.cpp`-nya sudah tidak ada.

```bash
chmod +x del_BinaryFile.sh
./del_BinaryFile.sh
```

File binary tidak ikut masuk repo karena sudah diatur di `.gitignore`.

## Tempat Latihan Lanjutan

- [TOKI Learning Center](https://tlx.toki.id)
- [Codeforces](https://codeforces.com)
- [AtCoder](https://atcoder.jp)
- [CSES Problem Set](https://cses.fi/problemset/)

## Catatan

Repo ini adalah catatan belajar pribadi. Solusi yang ada belum tentu yang paling optimal, dan akan terus diperbarui seiring bertambahnya materi.
