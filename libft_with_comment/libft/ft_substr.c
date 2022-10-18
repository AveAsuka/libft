#include "libft.h"
#include <string.h>
#include <unistd.h>

//static char * sup()
//{


//}

// ( 1)строка, 2)откуда, 3)[сколько]) - подразумевается, что мы не задаем отрицательных значений
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i; // хранитель нуля, потом счетчик памяти
	size_t	j; // дубликат 2)
	size_t	k; // счетчик-сравнитель для 3)
	char    *substring;

	if (s == NULL || len < 0)
		return (NULL);
	if (0 > start || start > len || ft_strlen(s) < start)
		return (ft_strdup("")); // при чем тут дуб?
	j = start; // для записи в подстроку дублируем стартовое число
	i = 0; // хранитель нуля,
	k = 0; // счетчик-сравнитель для 3) 
	while(s[start] && k < len) // считаем сколько памяти выделить
	{
		start++;
		i++;
		k++;
	}
	substring = (char *) malloc((i+1) * sizeof(char)); // выделяем память в подстроку
	if (!substring)
		return (NULL);
	i = 0; // сбрасываем оба счетчика
	k = 0;
	while (s[j] && k < len) // перезаписываем символы в подстроку
	{
		substring[i] = s[j];
		j++;
		k++;
		i++;
	}
  substring[i] = 0; // Не могу сказать точно нужна ли мне эта строчка
  return	(substring);
}

int main()
{
    char *s;
    
    printf ("Тест нашей функции:\n");
    
    s = ft_substr("rJZ0dblyK dgqlY59xa Zcm kzfu qER", 100, 1);
    printf("1. %s\n", s); // and start "8" with a len of "1" - Expected: K - Got:
    
    s = ft_substr("5TLRGqYWv8SOuKs1 Yiow RQAVwx5 dI1TtGR2eZ9ASMW LcWv89 p5uN 5D9l1UZI0Egr nOQcvs 176M", 8, 5);
    printf("2. %s\n", s); // and start "8" with a len of "5" - Expected: v8SOu - Got:

    s = ft_substr("7sTRkULintuevIP3 evXzFwboatxH2 2IExZSf yau RWCSvf", 6, 2); // and start "6" with a len of "2" - Expected: Li - Got:
    printf("3. %s\n", s); // and start "6" with a len of "2" - Expected: Li - Got:
    
    s = ft_substr("Z1SXJqUpEte9wWCI xje5WAaLyU9 mjOTU2E0a8HizW K3bNd6jx9Rln FkSsU 6GTaM8WOHgEco GvyPdDK FR25VhrBC9NY31 Y1kbnQvj ut3OgMsC 0XkThgm3p8tNHIG7l jIB6PS0J Mlyvrpjm1aWF UaSeylZh19v FcDzx7h6RPZ4NgGy c0GO3 Y0QqPldSuUV r2F89oAVLqDc1", 5, 4);
    printf("4. %s\n", s); // and start "5" with a len of "4" - Expected: qUpE - Got:
    
    s = ft_substr("CFmN ipkzT6Xvq8U4 rRJg mBsUA aLlsucmb53Zpgw MnAzSdqPwoimEKr6 ENrU70yFum9Z TcWd1wv4VQ y0E8maHuO vyn cDPH5k76brz8o wIry5aePvxn9W 8VPNIB Soc09Yn", 8, 2);
    printf("5. %s\n", s); // and start "8" with a len of "2" - Expected: zT - Got:
    
    s = ft_substr("3xjmcUWAKqVDIo CueOJFQ OWgEq67DKUIPw foNjBVmn5G z41 TCZ4 VowXsY MOZcLSvfTy 0uxyhJz7Bk9DR OnFl4MN2QjJdmveZ WIL43U Gzn7FHSPC NKRyY0n8kfVUqjBm UkorV2lG8MB Oq6y", 4, 2);
    printf("6. %s\n", s); // and start "4" with a len of "2" - Expected: cU - Got:
    
    s = ft_substr("jau9Wi SWPi QaeMJvd7h4 NMPnetxHQoz8mfX S5UM 6NCD0kHQw ZYhiOlPs W5VFgNyhOk", 6, 5);
    printf("7. %s\n", s); // and start "6" with a len of "5" - Expected: SWPi - Got:
    
    s = ft_substr("ERTJDAn0QUZqbzK9 8rGQ2TNbWey3qfY4 wZXchyi VSMIyHPJY0iETRu y0hZasn3mHOC9 jNZJpbn1c0W7 wcZsDvipVIAuPNLa G7D2HdPxLcMys YtPW5 09kVYA2J o7BK4H5viujwM d7Ilf", 5, 3);
    printf("8. %s\n", s); // and start "5" with a len of "3" - Expected: An0 - Got:
    
    s = ft_substr("DA7U 40yz pzbms1RlHB0Kk n5uEjIqgJDKd4oyF I6lM0 CwLd5PQ XacUKjbiJdB0r9 3rqRZw1O 5MYOx lc6hfVDaqNyLIQ", 4, 1);
    printf("9. %s\n", s); // and start "4" with a len of "1" - Expected: - Got:
 
    return (0);
}
