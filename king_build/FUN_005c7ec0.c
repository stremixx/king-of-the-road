
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c7ec0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  undefined1 local_100 [256];
  
  if (DAT_0070db48 == (code *)0x0) {
    return 0;
  }
  if (DAT_0070db54 == 0) {
    return 0;
  }
  iVar3 = DAT_00706ef8;
  fVar1 = _DAT_0064b24c;
  switch(param_2) {
  case 0:
    fVar1 = _DAT_0064b248;
    break;
  case 1:
    iVar3 = DAT_00706ef4;
    fVar1 = _DAT_0064b320;
    break;
  case 2:
    iVar3 = DAT_00706ef4;
    fVar1 = _DAT_00650cdc;
    break;
  case 3:
    iVar3 = DAT_00706ef4;
    break;
  case 4:
    break;
  case 5:
    iVar3 = DAT_00706ef4;
    fVar1 = _DAT_006506fc;
    break;
  case 6:
    iVar3 = DAT_00706ef4;
    fVar1 = _DAT_0064b240;
    break;
  default:
    goto switchD_005c7ef3_default;
  }
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 0x40200;
    local_110 = *(undefined4 *)(param_1 + 0x14);
    local_10c = *(undefined4 *)(param_1 + 0x18);
    local_108 = *(undefined4 *)(param_1 + 0x1c);
    local_104 = *(float *)(param_1 + 0x20);
    local_120 = *(undefined4 *)(param_1 + 0x14);
    local_11c = *(undefined4 *)(param_1 + 0x18);
    local_118 = *(undefined4 *)(param_1 + 0x1c);
    local_114 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = (*DAT_0070db48)(param_1,iVar3,&local_120,local_104 * fVar1);
    return uVar2;
  }
switchD_005c7ef3_default:
  FUN_0061c369(local_100,s_Tree_material_not_found_0067e8d4);
  FUN_005d2250(local_100,0);
  return 0;
}

