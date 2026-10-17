
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00541200(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_c8 [200];
  
  uVar8 = param_1[6];
  uVar6 = (uint)*(ushort *)(param_1 + 5);
  uVar1 = *(undefined2 *)((int)param_1 + 0x16);
  param_1[0x14] = uVar8;
  *(byte *)(param_1 + 0x15) =
       (char)((uVar8 & 0x200) >> 7) + (char)(((uVar8 & 0x100) << 1) >> 8) + ((byte)(uVar8 >> 7) & 1)
  ;
  iVar5 = 0;
  param_1[0x16] = (float)((uint)(*(byte *)(param_1 + 7) >> 3) << 2);
  switch(*(byte *)(param_1 + 7) & 7) {
  case 0:
    param_1[0x17] = 0;
    break;
  case 1:
    param_1[0x17] = 1;
    break;
  case 2:
    param_1[0x17] = 2;
    break;
  case 3:
    param_1[0x17] = 3;
    break;
  case 4:
    param_1[0x17] = 4;
  }
  iVar3 = param_1[4];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((int)param_1 + 0x1d);
  iVar7 = 10;
  if (0 < iVar3) {
    pfVar4 = (float *)(param_1 + 0x23);
    do {
      *(undefined1 *)((int)param_1 + iVar5 + 0x61) = *(undefined1 *)((int)param_1 + iVar7 + 0x14);
      iVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)*(byte *)((int)param_1 + iVar7 + 0x16))
              * 0x100 + (uint)*(byte *)((int)param_1 + iVar7 + 0x15);
      iVar7 = iVar7 + 3;
      iVar5 = iVar5 + 1;
      iVar3 = (int)(short)((ushort)(iVar2 >> 10) & 7);
      pfVar4[-8] = (float)(int)(short)((ushort)iVar2 & 0x3ff) * (float)_DAT_0064e4d0;
      *pfVar4 = (float)iVar3 * (float)_DAT_0064e4c8;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < (int)param_1[4]);
  }
  iVar5 = 0;
  do {
    *(bool *)((int)param_1 + iVar5 + 0xbe) =
         (*(byte *)(iVar7 + 0x14 + (int)param_1) & '\x01' << ((byte)iVar5 & 0x1f)) != 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar7 = iVar7 + 1;
  iVar5 = 4;
  pfVar4 = (float *)(param_1 + 0x34);
  do {
    iVar3 = iVar7 + 0x14;
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + -1;
    *pfVar4 = (float)param_1[0x31] - (float)*(byte *)((int)param_1 + iVar3) * (float)_DAT_0064e4c0;
    pfVar4 = pfVar4 + 3;
  } while (iVar5 != 0);
  iVar5 = 4;
  pfVar4 = (float *)(param_1 + 0x3e);
  do {
    iVar3 = iVar7;
    iVar5 = iVar5 + -1;
    *pfVar4 = (float)(int)*(char *)((int)param_1 + iVar3 + 0x14) * (float)_DAT_0064e4b8;
    pfVar4[1] = (float)(int)*(char *)((int)param_1 + iVar3 + 0x15) * (float)_DAT_0064e4b8;
    pfVar4[2] = (float)_DAT_0064a660 - SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]);
    pfVar4 = pfVar4 + 3;
    iVar7 = iVar3 + 2;
  } while (iVar5 != 0);
  *(byte *)(param_1 + 0x2f) = *(byte *)(iVar3 + 0x16 + (int)param_1) >> 4;
  uVar8 = iVar3 + 3;
  *(byte *)((int)param_1 + 0xbd) = *(byte *)(iVar3 + 0x16 + (int)param_1) & 0xf;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if ((uVar8 == uVar6) && (uVar8 == param_1[1])) {
      return;
    }
    FUN_0061c369(local_c8,s_This_version_is_incompatible_wit_00678c84,uVar8,uVar6,param_1[1],
                 *param_1,uVar1);
    FUN_004e1e9c(local_c8);
  }
  param_1[0x2c] = (float)*(byte *)(iVar3 + 0x17 + (int)param_1) * (float)_DAT_0064e4b0;
  param_1[0x2b] = (float)((uint)*(ushort *)(iVar3 + 0x18 + (int)param_1) * 100);
  param_1[0x2d] = (float)*(byte *)(iVar3 + 0x1a + (int)param_1) * (float)_DAT_0064e4b0;
  param_1[0x2e] = (float)*(byte *)(iVar3 + 0x1b + (int)param_1) * (float)_DAT_0064db98;
  param_1[0x4a] = (float)*(byte *)(iVar3 + 0x1c + (int)param_1) * (float)_DAT_0064db98;
  param_1[0x4b] = *(byte *)(iVar3 + 0x1d + (int)param_1) & 1;
  param_1[0x4c] = *(byte *)(iVar3 + 0x1d + (int)param_1) >> 1 & 1;
  param_1[0x4d] = (*(byte *)(iVar3 + 0x1d + (int)param_1) & 0x1c) >> 2;
  param_1[0x4e] = *(byte *)(iVar3 + 0x1d + (int)param_1) >> 5 & 1;
  param_1[0x4f] = (uint)(*(byte *)(iVar3 + 0x1d + (int)param_1) >> 6);
  param_1[0x50] = *(byte *)(iVar3 + 0x1e + (int)param_1) & 1;
  iVar5 = iVar3 + 0xd;
  param_1[0x51] = (float)*(byte *)(iVar3 + 0x1f + (int)param_1) * (float)_DAT_0064db98;
  param_1[0x52] = (float)*(byte *)(iVar3 + 0x20 + (int)param_1) * (float)_DAT_0064db98;
  if ((int)uVar6 < (int)param_1[2]) {
    FUN_0061c369(local_c8,s_This_version_is_incompatible_wit_00678bf8,iVar5,uVar6,param_1[2],
                 *param_1,uVar1);
    FUN_004e1e9c(local_c8);
  }
  if ((0x3a < iVar5) || (iVar5 != param_1[2])) {
    FUN_0061c369(local_c8,s__NetVehIn__get_____c__d_>NETVAR__00678ba4,iVar5,0x3a,param_1[2],uVar6);
    FUN_004e1e9c(local_c8);
  }
  return;
}

