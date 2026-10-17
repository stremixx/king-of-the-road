
uint FUN_00630ffe(byte param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = param_2;
  if (param_2[1] == ':') {
    pcVar4 = param_2 + 2;
  }
  cVar1 = *pcVar4;
  if ((((cVar1 == '\\') || (cVar1 == '/')) && (pcVar4[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (uVar5 = 0x8000, cVar1 == '\0')))) {
    uVar5 = 0x4040;
  }
  uVar5 = uVar5 | (uint)(~param_1 & 1 | 2) << 7;
  iVar2 = FUN_006203be(param_2,0x2e);
  if (iVar2 != 0) {
    iVar3 = FUN_00631442(iVar2,&DAT_00688a24);
    if (iVar3 != 0) {
      iVar3 = FUN_00631442(iVar2,&DAT_00654620);
      if (iVar3 != 0) {
        iVar3 = FUN_00631442(iVar2,&DAT_00654618);
        if (iVar3 != 0) {
          iVar2 = FUN_00631442(iVar2,&DAT_00654610);
          if (iVar2 != 0) goto LAB_0063109f;
        }
      }
    }
    uVar5 = uVar5 | 0x40;
  }
LAB_0063109f:
  return (uVar5 & 0x1c0) >> 6 | uVar5 | uVar5 >> 3 & 0x38;
}

