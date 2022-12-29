# 密文字典
global LETTERS
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


# 加密算法
def cliper(msg, mode, key):
    msg = msg.upper()
    translated = ''

    for symbol in msg:
        if symbol in LETTERS:
            num = LETTERS.find(symbol)

            # 加密是目标字母向后移动某几位,当然我理解的应该也可以向前移动某几位
            if mode == 'encrypt':
                num = num + key
            # 解密减去移动的位数即可,若加密是减去那么解密就是加上
            elif mode == 'decrypt':
                num = num - key

            # 进行取余运算
            if num >= len(LETTERS):
                num = num - len(LETTERS)
            elif num < 0:
                num = num + len(LETTERS)
            
            # 将字典中对应的字母由取余后的数字索引出来,然后添加到翻译后的数组中
            translated = translated + LETTERS[num]
        
        # 如果信息中没有目标字典中的字符,那么就保持原样进行输出
        else:
            translated = translated + symbol

    return translated


# 明文加密
message = '1This is my secret message.'
# 密钥为13
translated = cliper(message, mode='encrypt', key=13)
print(translated)

# 密文解密
clipertxt = translated
txt = cliper(clipertxt, 'decrypt', key=13)
print(txt)


# 暴力破解算法
def decipher(msg):
    msg = msg.upper()  # 让字符指针指到字符串中的第一位

    # 开始暴力遍历破解
    for key in range(len(LETTERS)):
        
        translated = ''

        for symbol in msg:
            if symbol in LETTERS:
                num = LETTERS.find(symbol)
                num = num - key
                if num < 0:
                    num = num + len(LETTERS)
                translated = translated + LETTERS[num]
            else:
                translated = translated + symbol

        print(translated)


print('------暴力破解密文--------')
decipher(clipertxt)
