#include "global.h"
#include "code_08008b00.h"

// Could use better split

asm(".include \"include/gba.inc\"");//Temporary

// Random utility functions

#include "asm/code_08008b00/asm_08008b00.s"

#include "asm/code_08008b00/asm_08008d44.s"

#include "asm/code_08008b00/asm_08008d88.s"

#include "asm/code_08008b00/asm_08008dcc.s"

#include "asm/code_08008b00/asm_08008de4.s"

#include "asm/code_08008b00/asm_08008dfc.s"

#include "asm/code_08008b00/asm_08008e10.s"

#include "asm/code_08008b00/asm_08008e40.s"

#include "asm/code_08008b00/asm_08008e74.s"

#include "asm/code_08008b00/asm_08008ea4.s"

#include "asm/code_08008b00/asm_08008ed0.s"

#include "asm/code_08008b00/asm_08008eec.s"

#include "asm/code_08008b00/asm_08008f04.s"

#include "asm/code_08008b00/asm_08008f1c.s"

#include "asm/code_08008b00/asm_08008f68.s"

#include "asm/code_08008b00/asm_08008f74.s"

#include "asm/code_08008b00/asm_08008fe0.s"

#include "asm/code_08008b00/asm_08008ff8.s"

#include "asm/code_08008b00/asm_08009024.s"

#include "asm/code_08008b00/asm_08009048.s"

#include "asm/code_08008b00/asm_08009090.s"

#include "asm/code_08008b00/asm_080090d0.s"

#include "asm/code_08008b00/asm_080090ec.s"

#include "asm/code_08008b00/asm_08009150.s"

#include "asm/code_08008b00/asm_0800915c.s"

#include "asm/code_08008b00/asm_0800917c.s"

#include "asm/code_08008b00/asm_080091a4.s"

#include "asm/code_08008b00/asm_080091c4.s"

#include "asm/code_08008b00/asm_080091d8.s"

#include "asm/code_08008b00/asm_080091fc.s"

#include "asm/code_08008b00/asm_0800921c.s"

#include "asm/code_08008b00/asm_08009240.s"

#include "asm/code_08008b00/asm_08009268.s"

#include "asm/code_08008b00/asm_0800928c.s"

#include "asm/code_08008b00/asm_080092cc.s"

#include "asm/code_08008b00/asm_0800931c.s"

#include "asm/code_08008b00/asm_0800936c.s"

#include "asm/code_08008b00/asm_08009394.s"

#include "asm/code_08008b00/asm_080093a0.s"

#include "asm/code_08008b00/asm_080093a4.s"

#include "asm/code_08008b00/asm_080093a8.s"

#include "asm/code_08008b00/asm_080093b4.s"

#include "asm/code_08008b00/asm_080093c0.s"

#include "asm/code_08008b00/asm_08009458.s"

#include "asm/code_08008b00/asm_08009508.s"

#include "asm/code_08008b00/asm_08009548.s"

#include "asm/code_08008b00/asm_08009564.s"

#include "asm/code_08008b00/asm_080095a8.s"

#include "asm/code_08008b00/asm_080095c0.s"

#include "asm/code_08008b00/asm_080095e8.s"

#include "asm/code_08008b00/asm_08009604.s"

#include "asm/code_08008b00/asm_0800965c.s"

#include "asm/code_08008b00/asm_08009668.s"

#include "asm/code_08008b00/asm_08009674.s"

#include "asm/code_08008b00/asm_080096a4.s"

#include "asm/code_08008b00/asm_080096e0.s"

#include "asm/code_08008b00/asm_08009760.s"

#include "asm/code_08008b00/asm_080097b4.s"

#include "asm/code_08008b00/asm_080097d0.s"

#include "asm/code_08008b00/asm_08009814.s"

#include "asm/code_08008b00/asm_0800982c.s"

#include "asm/code_08008b00/asm_08009844.s"

#include "asm/code_08008b00/asm_08009884.s"

#include "asm/code_08008b00/asm_08009898.s"

#include "asm/code_08008b00/asm_080098c4.s"

#include "asm/code_08008b00/asm_080098fc.s"

#include "asm/code_08008b00/asm_08009948.s"

#include "asm/code_08008b00/asm_080099a0.s"

#include "asm/code_08008b00/asm_08009a54.s"

#include "asm/code_08008b00/asm_08009aa4.s"

#include "asm/code_08008b00/asm_08009af4.s"

#include "asm/code_08008b00/asm_08009de4.s"

#include "asm/code_08008b00/asm_0800a004.s"

#include "asm/code_08008b00/asm_0800a030.s"

#include "asm/code_08008b00/asm_0800a05c.s"

#include "asm/code_08008b00/asm_0800a068.s"

#include "asm/code_08008b00/asm_0800a084.s"

#include "asm/code_08008b00/asm_0800a090.s"

#include "asm/code_08008b00/asm_0800a0f0.s"

#include "asm/code_08008b00/asm_0800a108.s"

#include "asm/code_08008b00/asm_0800a1ac.s"

#include "asm/code_08008b00/asm_0800a1d4.s"

#include "asm/code_08008b00/asm_0800a204.s"

#include "asm/code_08008b00/asm_0800a2f8.s"

#include "asm/code_08008b00/asm_0800a4a8.s"

#include "asm/code_08008b00/asm_0800a6a0.s"

#include "asm/code_08008b00/asm_0800a794.s"

#include "asm/code_08008b00/asm_0800a7fc.s"

#include "asm/code_08008b00/asm_0800a818.s"

#include "asm/code_08008b00/asm_0800a890.s"

#include "asm/code_08008b00/asm_0800a914.s"

#include "asm/code_08008b00/asm_0800a934.s"

#include "asm/code_08008b00/asm_0800aa1c.s"

#include "asm/code_08008b00/asm_0800aa4c.s"

#include "asm/code_08008b00/asm_0800aa78.s"

#include "asm/code_08008b00/asm_0800aa9c.s"

#include "asm/code_08008b00/asm_0800aac0.s"

#include "asm/code_08008b00/asm_0800abb0.s"

#include "asm/code_08008b00/asm_0800ac58.s"

#include "asm/code_08008b00/asm_0800ac68.s"

#include "asm/code_08008b00/asm_0800ac80.s"

#include "asm/code_08008b00/asm_0800ac90.s"

#include "asm/code_08008b00/asm_0800aca0.s"

#include "asm/code_08008b00/asm_0800acb0.s"

#include "asm/code_08008b00/asm_0800acbc.s"

#include "asm/code_08008b00/asm_0800acc8.s"

#include "asm/code_08008b00/asm_0800acd8.s"

#include "asm/code_08008b00/asm_0800ace8.s"

#include "asm/code_08008b00/asm_0800acf8.s"

#include "asm/code_08008b00/asm_0800ad20.s"

#include "asm/code_08008b00/asm_0800ad30.s"

#include "asm/code_08008b00/asm_0800ad40.s"

#include "asm/code_08008b00/asm_0800ad68.s"

#include "asm/code_08008b00/asm_0800ad98.s"

#include "asm/code_08008b00/asm_0800ada8.s"

#include "asm/code_08008b00/asm_0800adb4.s"

#include "asm/code_08008b00/asm_0800adc0.s"

#include "asm/code_08008b00/asm_0800add8.s"

#include "asm/code_08008b00/asm_0800ae00.s"

#include "asm/code_08008b00/asm_0800ae0c.s"

#include "asm/code_08008b00/asm_0800ae1c.s"

#include "asm/code_08008b00/asm_0800ae3c.s"

#include "asm/code_08008b00/asm_0800ae88.s"

#include "asm/code_08008b00/asm_0800aeb4.s"

#include "asm/code_08008b00/asm_0800b074.s"

#include "asm/code_08008b00/asm_0800b0d4.s"

#include "asm/code_08008b00/asm_0800b108.s"

#include "asm/code_08008b00/asm_0800b118.s"

#include "asm/code_08008b00/asm_0800b12c.s"

#include "asm/code_08008b00/asm_0800b140.s"

#include "asm/code_08008b00/asm_0800b21c.s"

#include "asm/code_08008b00/asm_0800b30c.s"

#include "asm/code_08008b00/asm_0800b31c.s"

#include "asm/code_08008b00/asm_0800b32c.s"

#include "asm/code_08008b00/asm_0800b368.s"

#include "asm/code_08008b00/asm_0800b384.s"
