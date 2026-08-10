*This project has been created as part of the 42 curriculum by kaaltint.*

# Libft

## Açıklama

Libft, 42 Common Core kapsamında geliştirilen kişisel bir C kütüphanesidir.

Bu projenin amacı, C standart kütüphanesindeki bazı temel fonksiyonları yeniden
yazarak çalışma mantıklarını anlamak ve ilerideki projelerde kullanılabilecek
bir statik kütüphane oluşturmaktır.

Proje; string işlemleri, bellek yönetimi, dinamik bellek ayırma, file descriptor
kullanımı ve linked list işlemlerini kapsar.

Derleme sonucunda `libft.a` dosyası oluşturulur.

## Derleme

Projeyi derlemek için:

```bash
make
```

Object dosyalarını silmek için:

```bash
make clean
```

Tüm derleme dosyalarını silmek için:

```bash
make fclean
```

Projeyi yeniden derlemek için:

```bash
make re
```

## Kütüphane İçeriği

Kütüphane; standart libc fonksiyonlarının yeniden implementasyonlarını,
string ve bellek işlemleri için ek yardımcı fonksiyonları ve tek yönlü
linked list işlemleri için gerekli fonksiyonları içerir.

## Resources

Projeyi geliştirirken kullanılan kaynaklar:

- 42 Libft Subject
- Linux Manual Pages  
  https://man7.org/linux/man-pages/
- cppreference C Documentation  
  https://en.cppreference.com/w/c
- GNU C Library Manual  
  https://www.gnu.org/software/libc/manual/
- The Open Group / POSIX Documentation  
  https://pubs.opengroup.org/onlinepubs/

Bu kaynaklar fonksiyonların davranışlarını, dönüş değerlerini, bellek
yönetimini ve edge case durumlarını incelemek için kullanıldı.

## Yapay Zeka Kullanımı

Yapay zeka yalnızca README dosyasının hazırlanmasına yardımcı olmak için
kullanılmıştır.