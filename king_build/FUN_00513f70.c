
void __fastcall FUN_00513f70(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  bVar8 = *(int *)(param_1 + 0x500) != 0;
  DAT_006d0fc0 = (uint)bVar8;
  DAT_006d0fbc = (uint)bVar8;
  puVar2 = &DAT_006d08a9;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
  } while ((int)puVar2 < 0x6d0af7);
  DAT_006d08c9 = 1;
  do {
    uVar6 = 0;
    puVar1 = DAT_006d0f9c;
    switch(iVar7) {
    case 1:
      goto switchD_00513fc1_caseD_1;
    case 2:
      uVar6 = 1;
switchD_00513fc1_caseD_1:
      iVar3 = *(int *)(param_1 + 0x2cc + iVar7 * 4);
      if (0x127 < iVar3) {
        iVar3 = iVar3 + -300;
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        iVar4 = iVar3 * 0xc;
        DAT_006d0fa4 = &DAT_006d0b10 + iVar3 * 3;
        uVar5 = *(int *)(param_1 + 0x2cc + iVar7 * 4) - 300U & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        switch(uVar5) {
        case 0:
        case 2:
          goto switchD_00514065_caseD_0;
        case 1:
        case 3:
          goto switchD_00514065_caseD_1;
        default:
          break;
        }
      }
      break;
    case 3:
      uVar6 = 1;
    case 0:
      if (0x127 < *(int *)(param_1 + 0x2cc + iVar7 * 4)) {
        iVar3 = *(int *)(param_1 + 0x2d8) + -300;
        iVar4 = *(int *)(param_1 + 0x2cc) + -300;
        bVar8 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 != (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2
        ;
        DAT_006d0fc8 = (uint)bVar8;
        uVar5 = *(int *)(param_1 + 0x2cc + iVar7 * 4) - 300;
        iVar3 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2;
        if (bVar8) {
          uVar5 = uVar5 & 0x80000003;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
          }
          switch(uVar5) {
          case 0:
          case 2:
            (&DAT_006d0b18)[iVar3 * 3] = 0;
            break;
          case 1:
          case 3:
            (&DAT_006d0b18)[iVar3 * 3] = 1;
          }
          puVar1 = &DAT_006d0b10 + iVar3 * 3;
          if (iVar7 == 0) {
            puVar1 = DAT_006d0f9c;
            DAT_006d0fa0 = &DAT_006d0b10 + iVar3 * 3;
          }
        }
        else {
          iVar4 = iVar3 * 0xc;
          DAT_006d0fa0 = &DAT_006d0b10 + iVar3 * 3;
          uVar5 = *(int *)(param_1 + 0x2cc + iVar7 * 4) - 300U & 0x80000003;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
          }
          switch(uVar5) {
          case 1:
          case 3:
switchD_00514065_caseD_1:
            uVar6 = uVar6 ^ 1;
          case 0:
          case 2:
switchD_00514065_caseD_0:
            *(uint *)((int)&DAT_006d0b18 + iVar4) = uVar6;
            puVar1 = DAT_006d0f9c;
          }
        }
      }
      break;
    default:
      break;
    }
    DAT_006d0f9c = puVar1;
    iVar3 = *(int *)(param_1 + 0x210 + iVar7 * 4);
    if (iVar3 < 0x128) {
      (&DAT_006d0e20)[iVar7] = &DAT_006d08a8 + iVar3 * 2;
    }
    iVar3 = *(int *)(param_1 + 0x2cc + iVar7 * 4);
    if (iVar3 < 0x128) {
      (&DAT_006d0edc)[iVar7] = &DAT_006d08a8 + iVar3 * 2;
    }
    switch(iVar7) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      if ((&DAT_006d0e20)[iVar7] != 0) {
        *(undefined1 *)((&DAT_006d0e20)[iVar7] + 1) = 1;
      }
      if ((&DAT_006d0edc)[iVar7] != 0) {
        *(undefined1 *)((&DAT_006d0edc)[iVar7] + 1) = 1;
      }
    }
    iVar7 = iVar7 + 1;
    if (0x2e < iVar7) {
      return;
    }
  } while( true );
}

