// per-device BSP DXEs
FILE DRIVER = 8e9bd160-b184-11df-94e2-0800200c9a66 {
	SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm8150/DALSys/DALSys.depex
	SECTION PE32 = Platform/EFI_Binaries/Drivers/Devices/nabu/DALSys/DALSys.efi
	SECTION UI = "DALSys"
}

FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
	SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm8150/ButtonsDxe/ButtonsDxe.depex
	SECTION PE32 = Platform/EFI_Binaries/Drivers/Devices/nabu/ButtonsDxe/ButtonsDxe.efi
	SECTION UI = "ButtonsDxe"
}

// ACPI Tables
FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
# 	Customized DSDT
	SECTION RAW = Platform/Xiaomi/sm8150/AcpiTables/nabu/DSDT.aml
# 	Common Tables
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/APIC.aml
# 	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/BERT.aml
# 	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/BGRT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/CSRT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/DBG2.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/FACP.aml
# 	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/FPDT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/GTDT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/IORT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/MCFG.aml
# 	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/MSDM.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/PPTT.aml
	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/TPM2.aml
# 	SECTION RAW = Silicon/Qualcomm/sm8150/AcpiTables/BuiltIn/XSDT.aml
	SECTION UI = "AcpiTables"
}

// Mainline device tree blob 
// from https://github.com/map220v/sm8150-mainline/blob/nabu-5.19/arch/arm64/boot/dts/qcom/sm8150-xiaomi-nabu.dts
FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  SECTION RAW = Platform/Xiaomi/sm8150/FdtBlob/nabu/sm8150-xiaomi-nabu.dtb
}
