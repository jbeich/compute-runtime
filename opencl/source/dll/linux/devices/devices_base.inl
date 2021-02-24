/*
 * Copyright (C) 2018-2021 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

// clang-format off
#ifdef SUPPORT_GEN12LP
#ifdef SUPPORT_TGLLP
DEVICE( 0xFF20, TGLLP_1x6x16, GTTYPE_GT2 )
NAMEDDEVICE( 0x9A49, TGLLP_1x6x16, GTTYPE_GT2, "Intel(R) Iris(R) Xe Graphics" )
NAMEDDEVICE( 0x9A40, TGLLP_1x6x16, GTTYPE_GT2, "Intel(R) Iris(R) Xe Graphics" )
DEVICE( 0x9A59, TGLLP_1x6x16, GTTYPE_GT2 )
DEVICE( 0x9A60, TGLLP_1x2x16, GTTYPE_GT2 )
DEVICE( 0x9A68, TGLLP_1x2x16, GTTYPE_GT2 )
DEVICE( 0x9A70, TGLLP_1x2x16, GTTYPE_GT2 )
NAMEDDEVICE( 0x9A78, TGLLP_1x2x16, GTTYPE_GT2, "Intel(R) UHD Graphics" )
#endif
#ifdef SUPPORT_DG1
NAMEDDEVICE( 0x4905, DG1_CONFIG, GTTYPE_GT2, "Intel(R) Iris(R) Xe MAX Graphics" )
DEVICE( 0x4906, DG1_CONFIG, GTTYPE_GT2 )
NAMEDDEVICE( 0x4907, DG1_CONFIG, GTTYPE_GT2, "Intel(R) Server GPU SG-18M" )
NAMEDDEVICE( 0x4908, DG1_CONFIG, GTTYPE_GT2, "Intel(R) Iris(R) Xe Graphics" )
#endif
#ifdef SUPPORT_RKL
DEVICE( 0x4C80, RKL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4C8A, RKL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4C8B, RKL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4C8C, RKL_HW_CONFIG, GTTYPE_GT0_5 )
DEVICE( 0x4C90, RKL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4C9A, RKL_HW_CONFIG, GTTYPE_GT1 )
#endif
#ifdef SUPPORT_ADLS
DEVICE( 0x4680, ADLS_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x46FF, ADLS_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4600, ADLS_HW_CONFIG, GTTYPE_GT1 )
#endif
#endif

#ifdef SUPPORT_GEN11
#ifdef SUPPORT_ICLLP
// GT1
DEVICE( 0xFF05, ICLLP_1x4x8, GTTYPE_GT1 )
NAMEDDEVICE( 0x8A56, ICLLP_1x4x8, GTTYPE_GT1, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x8A58, ICLLP_1x4x8, GTTYPE_GT1, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x8A5C, ICLLP_1x6x8, GTTYPE_GT1, "Intel(R) Iris(R) Plus Graphics" )
NAMEDDEVICE( 0x8A5A, ICLLP_1x6x8, GTTYPE_GT1, "Intel(R) Iris(R) Plus Graphics" )
// GT2
DEVICE( 0x8A50, ICLLP_1x8x8, GTTYPE_GT2 )
NAMEDDEVICE( 0x8A52, ICLLP_1x8x8, GTTYPE_GT2, "Intel(R) Iris(R) Plus Graphics" )
NAMEDDEVICE( 0x8A51, ICLLP_1x8x8, GTTYPE_GT2, "Intel(R) Iris(R) Plus Graphics" )

#endif

#ifdef SUPPORT_LKF
NAMEDDEVICE( 0x9840, LKF_1x8x8, GTTYPE_GT1, "Intel(R) UHD Graphics" )
#endif

#ifdef SUPPORT_EHL
DEVICE( 0x4500, EHL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4541, EHL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4551, EHL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4571, EHL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4555, EHL_HW_CONFIG, GTTYPE_GT1 )
DEVICE( 0x4E51, EHL_HW_CONFIG, GTTYPE_GT1 )
NAMEDDEVICE( 0x4E61, EHL_HW_CONFIG, GTTYPE_GT1, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x4E71, EHL_HW_CONFIG, GTTYPE_GT1, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x4E55, EHL_HW_CONFIG, GTTYPE_GT1, "Intel(R) UHD Graphics" )

#endif
#endif

#ifdef SUPPORT_GEN9
#ifdef SUPPORT_SKL
// GT1
NAMEDDEVICE( 0x1902, SKL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 510" )
NAMEDDEVICE( 0x190B, SKL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 510" )
DEVICE( 0x190A, SKL_1x2x6,  GTTYPE_GT1 )
NAMEDDEVICE( 0x1906, SKL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 510" )
DEVICE( 0x190E, SKL_1x2x6,  GTTYPE_GT1 )
// GT1_5
DEVICE( 0x1917, SKL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( 0x1913, SKL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( 0X1915, SKL_1x3x6,  GTTYPE_GT1_5 )
// GT2
NAMEDDEVICE( 0x1912, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 530" )
NAMEDDEVICE( 0x191B, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 530" )
DEVICE( 0x191A, SKL_1x3x8,  GTTYPE_GT2 )
NAMEDDEVICE( 0x1916, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 520" )
NAMEDDEVICE( 0x191E, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 515" )
NAMEDDEVICE( 0x191D, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics P530" )
NAMEDDEVICE( 0x1921, SKL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 520" )
DEVICE( 0x9905, SKL_1x3x8,  GTTYPE_GT2 )
// GT3
NAMEDDEVICE( 0x192B, SKL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Graphics 555" )
NAMEDDEVICE( 0x192D, SKL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Graphics P555" )
DEVICE( 0x192A, SKL_2x3x8,  GTTYPE_GT3 )
NAMEDDEVICE( 0x1923, SKL_2x3x8, GTTYPE_GT3, "Intel(R) HD Graphics 535" )
NAMEDDEVICE( 0x1926, SKL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Graphics 540" )
NAMEDDEVICE( 0x1927, SKL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Graphics 550" )
// GT4
DEVICE( 0x1932, SKL_3x3x8,  GTTYPE_GT4 )
NAMEDDEVICE( 0x193B, SKL_3x3x8, GTTYPE_GT4, "Intel(R) Iris(R) Pro Graphics 580" )
NAMEDDEVICE( 0x193A, SKL_3x3x8, GTTYPE_GT4, "Intel(R) Iris(R) Pro Graphics P580" )
NAMEDDEVICE( 0x193D, SKL_3x3x8, GTTYPE_GT4, "Intel(R) Iris(R) Pro Graphics P580" )
#endif

#ifdef SUPPORT_KBL
// GT1
NAMEDDEVICE( 0x5902, KBL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 610" )
NAMEDDEVICE( 0x590B, KBL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 610" )
DEVICE( 0x590A, KBL_1x2x6,  GTTYPE_GT1 )
NAMEDDEVICE( 0x5906, KBL_1x2x6, GTTYPE_GT1, "Intel(R) HD Graphics 610" )
DEVICE( 0x590E, KBL_1x3x6,  GTTYPE_GT1 )
DEVICE( 0x5908, KBL_1x2x6,  GTTYPE_GT1 )
// GT1_5
DEVICE( 0x5913, KBL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( 0x5915, KBL_1x2x6,  GTTYPE_GT1_5 )
// GT2
NAMEDDEVICE( 0x5912, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 630" )
NAMEDDEVICE( 0x591B, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 630" )
NAMEDDEVICE( 0x5917, KBL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 620" )
DEVICE( 0x591A, KBL_1x3x8,  GTTYPE_GT2 )
NAMEDDEVICE( 0x5916, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 620" )
NAMEDDEVICE( 0x591E, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 615" )
NAMEDDEVICE( 0x591D, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics P630" )
NAMEDDEVICE( 0x591C, KBL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 615" )
NAMEDDEVICE( 0x5921, KBL_1x3x8, GTTYPE_GT2, "Intel(R) HD Graphics 620" )
// GT3
NAMEDDEVICE( 0x5926, KBL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Plus Graphics 640" )
NAMEDDEVICE( 0x5927, KBL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Plus Graphics 650" )
DEVICE( 0x592B, KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x592A, KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x5923, KBL_2x3x8,  GTTYPE_GT3 )
// GT4
DEVICE( 0x5932, KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( 0x593B, KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( 0x593A, KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( 0x593D, KBL_3x3x8,  GTTYPE_GT4 )
#endif

#ifdef SUPPORT_CFL
// GT1
NAMEDDEVICE( 0x3E90, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics 610" )
NAMEDDEVICE( 0x3E93, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics 610" )
DEVICE( 0x3EA4, CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x3E99, CFL_1x2x6,  GTTYPE_GT1 )
NAMEDDEVICE( 0x3EA1, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics 610" )
// GT2
NAMEDDEVICE( 0x3E92, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
NAMEDDEVICE( 0x3E9B, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
NAMEDDEVICE( 0x3E94, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics P630" )
NAMEDDEVICE( 0x3E91, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
NAMEDDEVICE( 0x3E96, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics P630" )
NAMEDDEVICE( 0x3E9A, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics P630" )
DEVICE( 0x3EA3, CFL_1x3x8,  GTTYPE_GT2 )
NAMEDDEVICE( 0x3EA9, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 620" )
NAMEDDEVICE( 0x3EA0, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 620" )
NAMEDDEVICE( 0x3E98, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
// GT3
DEVICE( 0x3E95, CFL_2x3x8,  GTTYPE_GT3 )
NAMEDDEVICE( 0x3EA6, CFL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Plus Graphics 645" )
DEVICE( 0x3EA7, CFL_2x3x8,  GTTYPE_GT3 )
NAMEDDEVICE( 0x3EA8, CFL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Plus Graphics 655" )
NAMEDDEVICE( 0x3EA5, CFL_2x3x8, GTTYPE_GT3, "Intel(R) Iris(R) Plus Graphics 655" )
DEVICE( 0x3EA2, CFL_2x3x8,  GTTYPE_GT3 )

// CML GT1
NAMEDDEVICE( 0x9B21, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x9BAA, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics" )
DEVICE( 0x9BAB, CFL_1x2x6,  GTTYPE_GT1 )
NAMEDDEVICE( 0x9BAC, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics" )
DEVICE( 0x9BA0, CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x9BA5, CFL_1x2x6,  GTTYPE_GT1 )
NAMEDDEVICE( 0x9BA8, CFL_1x2x6, GTTYPE_GT1, "Intel(R) UHD Graphics 610" )
DEVICE( 0x9BA4, CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x9BA2, CFL_1x2x6,  GTTYPE_GT1 )
// CML GT2
NAMEDDEVICE( 0x9B41, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics" )
NAMEDDEVICE( 0x9BCA, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics" )
DEVICE( 0x9BCB, CFL_1x3x8,  GTTYPE_GT2 )
NAMEDDEVICE( 0x9BCC, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics" )
DEVICE( 0x9BC0, CFL_1x3x8,  GTTYPE_GT2 )
NAMEDDEVICE( 0x9BC5, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
NAMEDDEVICE( 0x9BC8, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics 630" )
NAMEDDEVICE( 0x9BC4, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics" )
DEVICE( 0x9BC2, CFL_1x3x8,  GTTYPE_GT2 )
// CML WORKSTATION
NAMEDDEVICE( 0x9BC6, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics P630" )
NAMEDDEVICE( 0x9BE6, CFL_1x3x8, GTTYPE_GT2, "Intel(R) UHD Graphics P630" )
#endif

#ifdef SUPPORT_GLK
NAMEDDEVICE( 0x3184, GLK_1x3x6, GTTYPE_GTA, "Intel(R) UHD Graphics 605" )
NAMEDDEVICE( 0x3185, GLK_1x2x6, GTTYPE_GTA, "Intel(R) UHD Graphics 600" )
#endif

#ifdef SUPPORT_BXT
DEVICE( 0x9906, BXT_1x3x6,  GTTYPE_GTA)
DEVICE( 0x9907, BXT_1x3x6,  GTTYPE_GTA)
DEVICE( 0x0A84, BXT_1x3x6,  GTTYPE_GTA)
NAMEDDEVICE( 0x5A84, BXT_1x3x6, GTTYPE_GTA, "Intel(R) HD Graphics 505" )   //18EU APL
NAMEDDEVICE( 0x5A85, BXT_1x2x6, GTTYPE_GTA, "Intel(R) HD Graphics 500" )   //12EU APL
DEVICE( 0x1A85, BXT_1x2x6,  GTTYPE_GTA)   //12EU APL
DEVICE( 0x1A84, BXT_1x3x6,  GTTYPE_GTA)
DEVICE( 0x9908, BXT_1x3x6,  GTTYPE_GTA)
#endif
#endif

#ifdef SUPPORT_GEN8
// GT1
DEVICE( 0x1602, BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x160A, BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x1606, BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x160E, BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( 0x160D, BDW_1x2x6,  GTTYPE_GT1 )
// GT2
DEVICE( 0x1612, BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( 0x161A, BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( 0x1616, BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( 0x161E, BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( 0x161D, BDW_1x3x8,  GTTYPE_GT2 )
// GT3
DEVICE( 0x1622, BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x162A, BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x1626, BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x162B, BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x162E, BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( 0x162D, BDW_2x3x8,  GTTYPE_GT3 )
#endif
// clang-format on
