
int FUN_00600f00(int *param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  char unaff_retaddr;
  undefined1 *puStack_1f4;
  undefined4 uStack_1f0;
  undefined4 *puStack_1ec;
  int iStack_1e8;
  int *piVar10;
  int *piVar11;
  uint uStack_1d4;
  int aiStack_1d0 [5];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 auStack_1a8 [4];
  int iStack_198;
  int aiStack_194 [55];
  uint uStack_b8;
  int aiStack_b4 [4];
  undefined4 local_a4 [34];
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int *piStack_10;
  
  puVar6 = local_a4;
  for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puStack_1ec = local_a4;
  iStack_1e8 = 0;
  uStack_1f0 = param_2;
  puStack_1f4 = &LAB_00600eb0;
  aiStack_1d0[1] = 0;
  aiStack_1d0[3] = 0;
  iVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if (-1 < iVar4) {
    uStack_1bc = DAT_006542d4;
    aiStack_1d0[4] = DAT_006542d0;
    uStack_1b8 = DAT_006542d8;
    uStack_1b4 = DAT_006542dc;
    uStack_1b0 = 0x10;
    uStack_1ac = param_2;
    iStack_1e8 = 1;
    uStack_1d4 = 0;
    if (uStack_b8 != 0) {
      piVar10 = aiStack_194;
      piVar11 = aiStack_b4;
      piVar5 = &iStack_198;
      puVar6 = auStack_1a8;
      do {
        aiStack_1d0[0] = *piVar11;
        aiStack_1d0[1] = piVar11[1];
        aiStack_1d0[2] = piVar11[2];
        bVar9 = true;
        aiStack_1d0[3] = piVar11[3];
        iVar4 = 4;
        piVar7 = aiStack_1d0;
        piVar8 = &DAT_006542c0;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *piVar7 == *piVar8;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          iVar4 = lstrlenA(&DAT_00722d58);
          if (0 < iVar4) {
            *puVar6 = DAT_006542c0;
            puVar6[1] = DAT_006542c4;
            puVar6[2] = DAT_006542c8;
            puVar6[3] = DAT_006542cc;
            iVar4 = lstrlenA(&DAT_00722d58);
            *piVar5 = iVar4 + 1;
            *piVar10 = (int)&DAT_00722d58;
            goto LAB_00601196;
          }
          if (unaff_retaddr != '\0') {
            *puVar6 = DAT_006542c0;
            puVar6[1] = DAT_006542c4;
            puVar6[2] = DAT_006542c8;
            puVar6[3] = DAT_006542cc;
            iVar4 = lstrlenA(s_1234567_00683220);
            *piVar5 = iVar4 + 1;
            *piVar10 = (int)s_1234567_00683220;
            goto LAB_00601196;
          }
        }
        else {
          iVar4 = 4;
          bVar9 = true;
          piVar7 = aiStack_1d0;
          piVar8 = &DAT_006542b0;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar9 = *piVar7 == *piVar8;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            *puVar6 = DAT_006542b0;
            puVar6[1] = DAT_006542b4;
            puVar6[2] = DAT_006542b8;
            puVar6[3] = DAT_006542bc;
            iVar4 = lstrlenA(&DAT_00722e20);
            *piVar5 = iVar4 + 1;
            *piVar10 = (int)&DAT_00722e20;
          }
          else {
            iVar4 = 4;
            bVar9 = true;
            piVar7 = aiStack_1d0;
            piVar8 = &DAT_006542a0;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar9 = *piVar7 == *piVar8;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              *puVar6 = DAT_006542a0;
              puVar6[1] = DAT_006542a4;
              puVar6[2] = DAT_006542a8;
              puVar6[3] = DAT_006542ac;
              iVar4 = lstrlenA(&DAT_00722ee8);
              *piVar5 = iVar4 + 1;
              *piVar10 = (int)&DAT_00722ee8;
            }
            else {
              iVar4 = 4;
              bVar9 = true;
              piVar7 = aiStack_1d0;
              piVar8 = &DAT_00654290;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar9 = *piVar7 == *piVar8;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              } while (bVar9);
              if ((!bVar9) || (sVar2 = FUN_0061f34d(&DAT_00722fb0), sVar2 == 0)) goto LAB_006011ac;
              *puVar6 = DAT_00654290;
              puVar6[1] = DAT_00654294;
              puVar6[2] = DAT_00654298;
              puVar6[3] = DAT_0065429c;
              *piVar5 = 2;
              *piVar10 = (int)&stack0xfffffe28;
            }
          }
LAB_00601196:
          puVar6 = puVar6 + 6;
          iStack_1e8 = iStack_1e8 + 1;
          piVar5 = piVar5 + 6;
          piVar10 = piVar10 + 6;
        }
LAB_006011ac:
        uStack_1d4 = uStack_1d4 + 1;
        piVar11 = piVar11 + 4;
        param_1 = piStack_10;
      } while (uStack_1d4 < uStack_b8);
    }
    iVar1 = iStack_1e8;
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1,aiStack_1d0 + 4,iStack_1e8,0,&stack0xfffffe20);
    if (iVar4 == -0x7788ffe2) {
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)puStack_1f4);
      pMem = GlobalLock(pvVar3);
      if (pMem == (LPVOID)0x0) {
        iVar4 = -0x7ff8fff2;
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x38))(param_1,&uStack_1d4,iVar1,pMem,&puStack_1f4);
        if (-1 < iVar4) {
          *puStack_1c = pMem;
          *puStack_18 = puStack_1f4;
          return 0;
        }
      }
      if (pMem != (LPVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
    }
  }
  return iVar4;
}

