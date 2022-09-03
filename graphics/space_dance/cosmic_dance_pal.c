#include "global.h"
#include "graphics.h"

// [D_088bcfd0] <description>
const Palette cosmic_dance_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0xF868E0),
        /* 01 */ TO_RGB555(0xF8F868),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0xD85000),
        /* 04 */ TO_RGB555(0x40F838),
        /* 05 */ TO_RGB555(0x083008),
        /* 06 */ TO_RGB555(0xF888A0),
        /* 07 */ TO_RGB555(0xF80000),
        /* 08 */ TO_RGB555(0x58F8F0),
        /* 09 */ TO_RGB555(0x2820F8),
        /* 10 */ TO_RGB555(0x28B0A8),
        /* 11 */ TO_RGB555(0xC0C0C0),
        /* 12 */ TO_RGB555(0xF888A0),
        /* 13 */ TO_RGB555(0xB870F8),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0xF868E0),
        /* 01 */ TO_RGB555(0xF8D8B8),
        /* 02 */ TO_RGB555(0xF88888),
        /* 03 */ TO_RGB555(0xC8A890),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0xF80000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x804070),
        /* 10 */ TO_RGB555(0xF87828),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0xB870F8),
        /* 13 */ TO_RGB555(0xF880E0),
        /* 14 */ TO_RGB555(0xF8B0F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0xF868E0),
        /* 01 */ TO_RGB555(0xF8F868),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0xF84870),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x00F8D8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x2018D8),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0xD8D038),
        /* 13 */ TO_RGB555(0x28C0B8),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x00F8D8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x1818B8),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0xB0A830),
        /* 13 */ TO_RGB555(0x20A0A0),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x00F8D8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x1810A0),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x686818),
        /* 13 */ TO_RGB555(0x188888),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x00F8D8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x101088),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x484810),
        /* 13 */ TO_RGB555(0x187068),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x0020B0),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088bd0f0] <description>
const Palette cosmic_dance_bg_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x585858),
        /* 01 */ TO_RGB555(0x808080),
        /* 02 */ TO_RGB555(0xA8A8A8),
        /* 03 */ TO_RGB555(0xC8C8C8),
        /* 04 */ TO_RGB555(0xE8E8E8),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x686868),
        /* 07 */ TO_RGB555(0x505050),
        /* 08 */ TO_RGB555(0x383838),
        /* 09 */ TO_RGB555(0x282828),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xC8C000),
        /* 02 */ TO_RGB555(0xF850E8),
        /* 03 */ TO_RGB555(0xF8F000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0xF80030),
        /* 06 */ TO_RGB555(0x08B8A8),
        /* 07 */ TO_RGB555(0x08F8E8),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF870B8),
        /* 03 */ TO_RGB555(0xF89090),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF870B8),
        /* 03 */ TO_RGB555(0xF8F000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF87018),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x4040F8),
        /* 03 */ TO_RGB555(0xE8F800),
        /* 04 */ TO_RGB555(0x70F898),
        /* 05 */ TO_RGB555(0xF8C050),
        /* 06 */ TO_RGB555(0xF8E088),
        /* 07 */ TO_RGB555(0xF88060),
        /* 08 */ TO_RGB555(0xF8E0D8),
        /* 09 */ TO_RGB555(0x980008),
        /* 10 */ TO_RGB555(0xF80000),
        /* 11 */ TO_RGB555(0xF87870),
        /* 12 */ TO_RGB555(0x686868),
        /* 13 */ TO_RGB555(0x8888F8),
        /* 14 */ TO_RGB555(0x989898),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xD0D0D0),
        /* 04 */ TO_RGB555(0xA8A8A8),
        /* 05 */ TO_RGB555(0x60E000),
        /* 06 */ TO_RGB555(0xC8B800),
        /* 07 */ TO_RGB555(0x904810),
        /* 08 */ TO_RGB555(0x200060),
        /* 09 */ TO_RGB555(0x002840),
        /* 10 */ TO_RGB555(0xF8D090),
        /* 11 */ TO_RGB555(0xD86000),
        /* 12 */ TO_RGB555(0x988800),
        /* 13 */ TO_RGB555(0x0008E0),
        /* 14 */ TO_RGB555(0x08F8F8),
        /* 15 */ TO_RGB555(0xE80000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xF8A848),
        /* 04 */ TO_RGB555(0xA8A8A8),
        /* 05 */ TO_RGB555(0xF8C888),
        /* 06 */ TO_RGB555(0xF83030),
        /* 07 */ TO_RGB555(0x3870F8),
        /* 08 */ TO_RGB555(0x00B8F8),
        /* 09 */ TO_RGB555(0x989898),
        /* 10 */ TO_RGB555(0xF890C8),
        /* 11 */ TO_RGB555(0xF8F810),
        /* 12 */ TO_RGB555(0xB8B028),
        /* 13 */ TO_RGB555(0xB8B028),
        /* 14 */ TO_RGB555(0x00F868),
        /* 15 */ TO_RGB555(0xE80000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0xF8C888),
        /* 04 */ TO_RGB555(0x3818F8),
        /* 05 */ TO_RGB555(0xB0B810),
        /* 06 */ TO_RGB555(0xF868F0),
        /* 07 */ TO_RGB555(0xF8F000),
        /* 08 */ TO_RGB555(0xF87828),
        /* 09 */ TO_RGB555(0xB000A8),
        /* 10 */ TO_RGB555(0xF80000),
        /* 11 */ TO_RGB555(0x2878F8),
        /* 12 */ TO_RGB555(0x909090),
        /* 13 */ TO_RGB555(0xF8B0B0),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0xD88028)
    },
    /* PALETTE 09 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x7058F8),
        /* 02 */ TO_RGB555(0xA85838),
        /* 03 */ TO_RGB555(0xC88800),
        /* 04 */ TO_RGB555(0xF8A800),
        /* 05 */ TO_RGB555(0x68B0F8),
        /* 06 */ TO_RGB555(0xB8B000),
        /* 07 */ TO_RGB555(0xF800B8),
        /* 08 */ TO_RGB555(0xF83068),
        /* 09 */ TO_RGB555(0x602000),
        /* 10 */ TO_RGB555(0x00D0F8),
        /* 11 */ TO_RGB555(0xF8E8D8),
        /* 12 */ TO_RGB555(0xF8F060),
        /* 13 */ TO_RGB555(0xF8B0B0),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 10 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xF8B860),
        /* 02 */ TO_RGB555(0xB8A8A8),
        /* 03 */ TO_RGB555(0x686060),
        /* 04 */ TO_RGB555(0xD0C0C0),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x0820F8),
        /* 12 */ TO_RGB555(0x00E8F8),
        /* 13 */ TO_RGB555(0xD0F8F8),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000030)
    },
    /* PALETTE 11 */ {
        /* 00 */ TO_RGB555(0x0070C8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xF8F8F8),
        /* 04 */ TO_RGB555(0x484848),
        /* 05 */ TO_RGB555(0xC8C8C8),
        /* 06 */ TO_RGB555(0x30F8F8),
        /* 07 */ TO_RGB555(0xF8F8F8),
        /* 08 */ TO_RGB555(0xF8D048),
        /* 09 */ TO_RGB555(0x3848F8),
        /* 10 */ TO_RGB555(0xF8F8F8),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0xF80000),
        /* 13 */ TO_RGB555(0x989898),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    }
};
