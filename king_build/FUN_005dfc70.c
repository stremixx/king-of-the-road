
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * __thiscall FUN_005dfc70(int *param_1,short *param_2)

{
  double dVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 local_6c [20];
  undefined1 local_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar4 = (int)*param_2;
  if (iVar4 < 0x203) {
    if (iVar4 == 0x202) {
      uVar7 = param_1[0x2eb];
      param_1[0x2eb] = (int)(uVar7 & 0xfffffffe);
      return (ushort *)(uVar7 & 0xfffffffe);
    }
    if (iVar4 == 0x100) {
      puVar5 = (ushort *)((int)param_2[3] - 8);
      switch(param_2[3]) {
      case 8:
        param_1[0x2eb] = param_1[0x2eb] ^ 8;
        return puVar5;
      case 0x1b:
      case 0x47:
      case 0x67:
        if ((int *)param_1[0x2ca] != (int *)0x0) {
          puVar5 = (ushort *)(**(code **)(*(int *)param_1[0x2ca] + 0x24))();
          return puVar5;
        }
        break;
      case 0x20:
        uVar7 = param_1[0x2eb];
        param_1[0x2eb] = (int)(uVar7 | 4);
        return (ushort *)(uVar7 | 4);
      case 0x6b:
        puVar5 = (ushort *)param_1[0x7a];
        *(float *)(puVar5 + 0x2c) = *(float *)(puVar5 + 0x2c) * (float)_DAT_0064c368;
        *(float *)(param_1[0x7a] + 0x54) = *(float *)(param_1[0x7a] + 0x54) * (float)_DAT_0064c368;
        return puVar5;
      case 0x6d:
        puVar5 = (ushort *)param_1[0x7a];
        *(float *)(puVar5 + 0x2c) = *(float *)(puVar5 + 0x2c) * (float)_DAT_00651540;
        *(float *)(param_1[0x7a] + 0x54) = *(float *)(param_1[0x7a] + 0x54) * (float)_DAT_00651540;
        return puVar5;
      case 0x71:
        param_1[0x2ea] = 0;
        return puVar5;
      case 0x72:
        param_1[0x2ea] = 1;
        return puVar5;
      case 0x73:
        param_1[0x2ea] = 2;
        return puVar5;
      case 0x74:
        FUN_005ddc60();
        if (DAT_007206b8 < 9999) {
          puVar14 = local_6c;
          uVar15 = 0x68203800682034;
          FUN_0061c369();
          FUN_006313e1(s___F5DIR_00682038,puVar14,uVar15);
          FUN_0061c369(local_58,s__sphoto_04d_tga_00682024,local_6c,DAT_007206b8);
          uVar8 = FUN_0061c356(local_58,&DAT_0066f3e4);
          FUN_005e9040(param_1[3],uVar8);
          FUN_0061c25a(uVar8);
          DAT_007206b8 = DAT_007206b8 + 1;
        }
        puVar5 = (ushort *)FUN_005ddc80();
        return puVar5;
      case 0x75:
        FUN_0061c369(&DAT_0072021c,s_length_frame____f_0068200c,
                     *(double *)(param_1 + 0x2e8) * _DAT_0064a720);
        FUN_0061c369(&DAT_0071fd70,s_scene____f_00681ff8,*(undefined8 *)(param_1 + 0x7c));
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_faces____f_00681fe0,*(undefined8 *)(param_1 + 0x7e));
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_rastr____f_00681fc8,*(undefined8 *)(param_1 + 0x80));
        fVar3 = _DAT_007206a4;
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_background____f_00681fb4,(double)fVar3);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        dVar1 = (double)_DAT_00720170;
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_foreground____f_00681fa0,dVar1);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        dVar1 = (double)_DAT_007206ac;
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_swap_time____f_00681f8c,dVar1);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        dVar1 = (double)_DAT_007206a8;
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_clear_time____f_00681f78,dVar1);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_collision____f_00681f60,*(undefined8 *)(param_1 + 0x9c));
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_position___f__f__f_00681efc,param_1[0x2d6],param_1[0x2d7],
                     param_1[0x2d8],param_1[0x2d9],param_1[0x2da],param_1[0x2db]);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369(&DAT_0071fd70,s_yaw___f_00681ef0,*(double *)(param_1 + 0x2dc) * _DAT_0064e3b0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0061c369();
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_0071fd70;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0072021c;
        do {
          pcVar12 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        pcVar10 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; iVar4 = DAT_007206b0, uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar13 = pcVar13 + 1;
        }
        if ((*(uint *)(iVar4 + 0x10c) & 0x400) != 0) {
          puVar5 = (ushort *)FUN_005d2250(&DAT_0072021c,*(uint *)(iVar4 + 0x10c));
          return puVar5;
        }
        puVar5 = (ushort *)MessageBoxA((HWND)0x0,(LPCSTR)&DAT_0072021c,s_Statistic_00681eb4,0);
        return puVar5;
      case 0x76:
        DAT_007206c0 = DAT_007206c0 ^ 1;
        return puVar5;
      case 0x77:
        FUN_005ddc60();
        uVar8 = FUN_0061c356(s_view_key_00681e90,&DAT_0067eac0);
        FUN_0061d86c();
        FUN_005db380();
        FUN_0061d86c(uVar8,s__f__f__f_00681e80,(double)local_38,(double)local_34,(double)local_30);
        FUN_0061d86c(uVar8,s__f__f__f_00681e80,(double)local_2c,(double)local_28,(double)local_24);
        FUN_0061d86c(uVar8,s__f__f__f_00681e80,(double)local_20,(double)local_1c,(double)local_18);
        FUN_0061d86c(uVar8,s__f__f__f_00681e80,(double)local_14,(double)local_10,(double)local_c);
        FUN_0061c25a(uVar8);
        DAT_007206bc = DAT_007206bc + 1;
        puVar5 = (ushort *)FUN_005ddc80();
        return puVar5;
      case 0x78:
        DAT_007206c4 = DAT_007206c4 ^ 1;
        return puVar5;
      }
    }
    else {
      if (iVar4 == 0x200) {
        iVar4 = (int)param_2[1];
        iVar11 = (int)param_2[2];
        if (param_1[0x2ea] == 1) {
          puVar5 = (ushort *)param_1[3];
          *(double *)(param_1 + 0x2ce) =
               (double)(int)((uint)(*puVar5 >> 1) - iVar4) * _DAT_0064a590 * _DAT_0064c0e0;
          *(double *)(param_1 + 0x2d0) =
               (double)(int)(iVar11 - (uint)(puVar5[1] >> 1)) * _DAT_0064c328;
          return puVar5;
        }
        if (iVar4 < (int)((*(ushort *)param_1[3] >> 1) - 0x28)) {
          iVar6 = (**(code **)(*param_1 + 0x14))();
          *(double *)(param_1 + 0x2ce) =
               (double)((iVar6 / 2 - iVar4) + -0x28) * _DAT_0064a590 * _DAT_0064c0e0;
        }
        else if ((int)((*(ushort *)param_1[3] >> 1) + 0x28) < iVar4) {
          iVar6 = (**(code **)(*param_1 + 0x14))();
          *(double *)(param_1 + 0x2ce) =
               (double)((iVar4 - iVar6 / 2) + -0x28) * _DAT_0064a590 * _DAT_0064cd68;
        }
        else {
          param_1[0x2ce] = 0;
          param_1[0x2cf] = 0;
        }
        uVar7 = (uint)(*(ushort *)(param_1[3] + 2) >> 1);
        if (iVar11 < (int)(uVar7 - 0x28)) {
          iVar4 = (**(code **)(*param_1 + 0x18))();
          puVar5 = (ushort *)((iVar4 / 2 - iVar11) + -0x28);
          *(double *)(param_1 + 0x2d0) = (double)(int)puVar5 * _DAT_0064c328;
          return puVar5;
        }
        puVar5 = (ushort *)(uVar7 + 0x28);
        if ((int)puVar5 < iVar11) {
          iVar4 = (**(code **)(*param_1 + 0x18))();
          *(double *)(param_1 + 0x2d0) = -((double)((iVar11 - iVar4 / 2) + -0x28) * _DAT_0064c328);
          return (ushort *)(iVar4 / 2);
        }
        param_1[0x2d0] = 0;
        param_1[0x2d1] = 0;
        return puVar5;
      }
      puVar5 = (ushort *)(iVar4 - 0x201);
      if (puVar5 == (ushort *)0x0) {
        uVar7 = param_1[0x2eb];
        param_1[0x2eb] = (int)(uVar7 | 1);
        return (ushort *)(uVar7 | 1);
      }
    }
  }
  else if (iVar4 == 0x204) {
    puVar5 = (ushort *)(param_1[0x2eb] | 2);
    param_1[0x2eb] = (int)puVar5;
  }
  else {
    if (iVar4 == 0x205) {
      uVar7 = param_1[0x2eb];
      param_1[0x2eb] = (int)(uVar7 & 0xfffffffd);
      return (ushort *)(uVar7 & 0xfffffffd);
    }
    puVar5 = (ushort *)(iVar4 - 0x207);
    if (puVar5 == (ushort *)0x0) {
      iVar4 = param_1[0x2ea];
      param_1[0x2ea] = (iVar4 + 1) % 3;
      return (ushort *)((iVar4 + 1) / 3);
    }
  }
  return puVar5;
}

