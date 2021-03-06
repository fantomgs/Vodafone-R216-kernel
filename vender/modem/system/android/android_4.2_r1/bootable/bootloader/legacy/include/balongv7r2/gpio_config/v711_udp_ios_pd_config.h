/**************************************************************
CAUTION : This file is Auto Generated by VBA based on *.xls.
          So, don't modify this file manually!
***************************************************************/
#ifndef V711_UDP_IOS_PD_CONFIG_H_
#define V711_UDP_IOS_PD_CONFIG_H_

/*配置管脚复用关系、内部上下拉以及驱动能力*/
#define V711_UDP_IOS_PD_CONFIG \
do{\
\
/*配置NANDFLASH(14个PIN)*/\
\
/*配置BOOT_MODE,JTAG_MODE(6个PIN）*/\
    /*antpa_sel[17]管脚复用配置*/\
    SET_IOS_ANTPA_SEL17_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL15;\
    CLR_IOS_GPIO1_0_CTRL1_1;\
    /*antpa_sel[17]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL15;\
\
    /*antpa_sel[18]管脚复用配置*/\
    SET_IOS_ANTPA_SEL18_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL16;\
    CLR_IOS_GPIO1_1_CTRL1_1;\
    /*antpa_sel[18]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL16;\
\
    /*antpa_sel[19]管脚复用配置*/\
    SET_IOS_ANTPA_SEL19_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL17;\
    CLR_IOS_GPIO1_2_CTRL1_1;\
    /*antpa_sel[19]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL17;\
\
    /*antpa_sel[20]管脚复用配置*/\
    SET_IOS_ANTPA_SEL20_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL18;\
    CLR_IOS_GPIO1_3_CTRL1_1;\
    /*antpa_sel[20]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL18;\
\
    /*antpa_sel[21]管脚复用配置*/\
    SET_IOS_ANTPA_SEL21_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL19;\
    CLR_IOS_GPIO1_4_CTRL1_1;\
    /*antpa_sel[21]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL19;\
\
\
/*配置MMC1(6个PIN）*/\
    /*mmc1_clk管脚复用配置*/\
    OUTSET_IOS_PD_IOM_CTRL21;\
    /*mmc1_clk管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL21;\
\
    /*mmc1_cmd管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL22;\
\
    /*mmc1_data[0]管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL23;\
\
    /*mmc1_data[1]管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL24;\
\
    /*mmc1_data[2]管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL25;\
\
    /*mmc1_data[3]管脚Drive电流配置*/\
    I12MASET_IOS_PD_IOM_CTRL26;\
\
\
/*配置JTAG0（6个PIN）*/\
\
/*配置GPIO/GSBI_0(20PIN）*/\
    /*gpio2[0]管脚输入方向配置*/\
    gpio_direction_input(GPIO_2_0);\
\
    /*gpio2[1]管脚输入方向配置*/\
    gpio_direction_input(GPIO_2_1);\
\
    /*uart2_txd管脚复用配置*/\
    CLR_IOS_UART2_CTRL2_1;\
    SET_IOS_UART2_CTRL2_2;\
    OUTSET_IOS_PD_IOM_CTRL30;\
    CLR_IOS_GPIO2_2_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    /*uart2_txd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL30;\
\
    /*uart2_rxd管脚复用配置*/\
    CLR_IOS_UART2_CTRL2_1;\
    SET_IOS_UART2_CTRL2_2;\
    INSET_IOS_PD_IOM_CTRL31;\
    CLR_IOS_GPIO2_3_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    /*uart2_rxd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL31;\
\
    /*uart1_txd管脚复用配置*/\
    CLR_IOS_UART1_CTRL3_2;\
    CLR_IOS_UART1_CTRL3_3;\
    SET_IOS_UART1_CTRL3_1;\
    OUTSET_IOS_PD_IOM_CTRL32;\
    CLR_IOS_GPIO2_4_CTRL1_1;\
    CLR_IOS_RGMII_CLK_CTRL1_1;\
    /*uart1_txd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL32;\
\
    /*uart1_rxd管脚复用配置*/\
    CLR_IOS_UART1_CTRL3_2;\
    CLR_IOS_UART1_CTRL3_3;\
    SET_IOS_UART1_CTRL3_1;\
    INSET_IOS_PD_IOM_CTRL33;\
    CLR_IOS_GPIO2_5_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    /*uart1_rxd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL33;\
\
    /*hs_uart_rts_n管脚复用配置*/\
    SET_IOS_HS_UART1_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL34;\
    CLR_IOS_GPIO2_6_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    CLR_IOS_UART1_CTRL3_2;\
    /*hs_uart_rts_n管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL34;\
\
    /*hs_uart_cts_n管脚复用配置*/\
    SET_IOS_HS_UART1_CTRL1_1;\
    INSET_IOS_PD_IOM_CTRL35;\
    CLR_IOS_GPIO2_7_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    CLR_IOS_UART1_CTRL3_2;\
\
    /*hs_uart_txd管脚复用配置*/\
    SET_IOS_HS_UART2_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL36;\
    CLR_IOS_GPIO2_8_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    CLR_IOS_LCD_CTRL3_2;\
    /*hs_uart_txd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL36;\
\
    /*hs_uart_rxd管脚复用配置*/\
    SET_IOS_HS_UART2_CTRL1_1;\
    INSET_IOS_PD_IOM_CTRL37;\
    CLR_IOS_GPIO2_9_CTRL1_1;\
    CLR_IOS_RGMII_CTRL1_1;\
    CLR_IOS_LCD_CTRL3_2;\
    /*hs_uart_rxd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL37;\
\
    /*i2c0_sda管脚复用配置*/\
    CLR_IOS_I2C0_CTRL2_2;\
    SET_IOS_I2C0_CTRL2_1;\
    CLR_IOS_GPIO2_10_CTRL1_1;\
    /*i2c0_sda管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL38;\
\
    /*i2c0_scl管脚复用配置*/\
    CLR_IOS_I2C0_CTRL2_2;\
    SET_IOS_I2C0_CTRL2_1;\
    CLR_IOS_GPIO2_11_CTRL1_1;\
    /*i2c0_scl管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL39;\
\
    /*zclk管脚复用配置*/\
    SET_IOS_ZSI_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL40;\
    CLR_IOS_GPIO2_12_CTRL1_1;\
    CLR_IOS_MMC0_CTRL1_1;\
    CLR_IOS_PCM_CTRL2_1;\
    CLR_IOS_SPI0_CS1_CTRL3_2;\
    CLR_IOS_ANTPA_SEL22_CTRL3_1;\
    /*zclk管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL40;\
\
    /*zsync管脚复用配置*/\
    SET_IOS_ZSI_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL41;\
    CLR_IOS_GPIO2_13_CTRL1_1;\
    CLR_IOS_MMC0_CTRL1_1;\
    CLR_IOS_PCM_CTRL2_1;\
    CLR_IOS_SPI1_CS1_CTRL4_2;\
    CLR_IOS_ANTPA_SEL23_CTRL3_1;\
    /*zsync管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL41;\
\
    /*zmosi管脚复用配置*/\
    SET_IOS_ZSI_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL42;\
    CLR_IOS_GPIO2_14_CTRL1_1;\
    CLR_IOS_MMC0_CTRL1_1;\
    CLR_IOS_PCM_CTRL2_1;\
    CLR_IOS_I2C1_CTRL2_1;\
    CLR_IOS_ANTPA_SEL24_CTRL3_1;\
    /*zmosi管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL42;\
\
    /*zmiso管脚复用配置*/\
    SET_IOS_ZSI_CTRL1_1;\
    INSET_IOS_PD_IOM_CTRL43;\
    CLR_IOS_GPIO2_15_CTRL1_1;\
    CLR_IOS_MMC0_CTRL1_1;\
    CLR_IOS_PCM_CTRL2_1;\
    CLR_IOS_I2C1_CTRL2_1;\
    CLR_IOS_ANTPA_SEL25_CTRL3_1;\
\
    /*spi0_cs0_n管脚复用配置*/\
    CLR_IOS_SPI0_CS0_CTRL2_2;\
    SET_IOS_SPI0_CS0_CTRL2_1;\
    OUTSET_IOS_PD_IOM_CTRL44;\
    CLR_IOS_GPIO2_16_CTRL1_1;\
    CLR_IOS_UART3_4LINE_CTRL2_1;\
    /*spi0_cs0_n管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL44;\
\
    /*spi0_clk管脚复用配置*/\
    CLR_IOS_SPI0_CTRL2_2;\
    SET_IOS_SPI0_CTRL2_1;\
    OUTSET_IOS_PD_IOM_CTRL45;\
    CLR_IOS_GPIO2_17_CTRL1_1;\
    CLR_IOS_UART3_4LINE_CTRL2_1;\
    /*spi0_clk管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL45;\
\
    /*uart3_txd管脚复用配置*/\
    CLR_IOS_UART3_CTRL2_2;\
    SET_IOS_UART3_CTRL2_1;\
    OUTSET_IOS_PD_IOM_CTRL46;\
    CLR_IOS_GPIO2_18_CTRL1_1;\
    /*uart3_txd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL46;\
\
    /*uart3_rxd管脚复用配置*/\
    CLR_IOS_UART3_CTRL2_2;\
    SET_IOS_UART3_CTRL2_1;\
    INSET_IOS_PD_IOM_CTRL47;\
    CLR_IOS_GPIO2_19_CTRL1_1;\
    /*uart3_rxd管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL47;\
\
    /*gpio2[19]管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL47;\
\
\
/*配置GPIO/GSBI_1(7PIN）*/\
    /*gpio2[24]管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL52;\
\
    /*pcie_clkreq_n管脚复用配置*/\
    CLR_IOS_PCIE_CLKREQ_CTRL3_2;\
    CLR_IOS_PCIE_CLKREQ_CTRL3_3;\
    SET_IOS_PCIE_CLKREQ_CTRL3_1;\
    CLR_IOS_GPIO2_25_CTRL1_1;\
    CLR_IOS_MMC0_CTRL1_1;\
    CLR_IOS_SPI1_CS1_CTRL4_1;\
    CLR_IOS_UART1_4LINE_CTRL2_1;\
    CLR_IOS_WLAN_BT_TX_ACTV_CTRL3_2;\
    /*pcie_clkreq_n管脚上下拉配置*/\
    PUSET_IOS_PD_IOM_CTRL53;\
\
    /*gpio2[26]管脚输入方向配置*/\
    gpio_direction_input(GPIO_2_26);\
\
\
/*配置RF线控：CH0 FEM(7PIN）*/\
    /*ch0_apt_pdm管脚复用配置*/\
    SET_IOS_CH0_APT_PDM_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL58;\
    CLR_IOS_GPIO1_11_CTRL1_1;\
    /*ch0_apt_pdm管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL58;\
\
    /*ch0_mipi_clk管脚复用配置*/\
    SET_IOS_CH0_MIPI_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL59;\
    CLR_IOS_GPIO1_12_CTRL1_1;\
    /*ch0_mipi_clk管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL59;\
\
    /*ch0_mipi_data管脚复用配置*/\
    SET_IOS_CH0_MIPI_CTRL1_1;\
    CLR_IOS_GPIO1_13_CTRL1_1;\
\
\
/*配置RF线控：FEM(17个PIN）*/\
    /*antpa_sel[0]管脚复用配置*/\
    SET_IOS_ANTPA_SEL0_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL62;\
    CLR_IOS_GPIO1_15_CTRL1_1;\
    /*antpa_sel[0]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL62;\
\
    /*antpa_sel[1]管脚复用配置*/\
    SET_IOS_ANTPA_SEL1_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL63;\
    CLR_IOS_GPIO1_16_CTRL1_1;\
    /*antpa_sel[1]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL63;\
\
    /*antpa_sel[2]管脚复用配置*/\
    SET_IOS_ANTPA_SEL2_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL64;\
    CLR_IOS_GPIO1_17_CTRL1_1;\
    /*antpa_sel[2]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL64;\
\
    /*antpa_sel[3]管脚复用配置*/\
    SET_IOS_ANTPA_SEL3_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL65;\
    CLR_IOS_GPIO1_18_CTRL1_1;\
    /*antpa_sel[3]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL65;\
\
    /*antpa_sel[4]管脚复用配置*/\
    SET_IOS_ANTPA_SEL4_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL66;\
    CLR_IOS_GPIO1_19_CTRL1_1;\
    /*antpa_sel[4]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL66;\
\
    /*antpa_sel[5]管脚复用配置*/\
    SET_IOS_ANTPA_SEL5_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL67;\
    CLR_IOS_GPIO1_20_CTRL1_1;\
    /*antpa_sel[5]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL67;\
\
    /*antpa_sel[6]管脚复用配置*/\
    SET_IOS_ANTPA_SEL6_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL68;\
    CLR_IOS_GPIO1_21_CTRL1_1;\
    /*antpa_sel[6]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL68;\
\
    /*antpa_sel[7]管脚复用配置*/\
    SET_IOS_ANTPA_SEL7_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL69;\
    CLR_IOS_GPIO1_22_CTRL1_1;\
    /*antpa_sel[7]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL69;\
\
    /*antpa_sel[8]管脚复用配置*/\
    SET_IOS_ANTPA_SEL8_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL70;\
    CLR_IOS_GPIO1_23_CTRL1_1;\
    /*antpa_sel[8]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL70;\
\
    /*antpa_sel[9]管脚复用配置*/\
    SET_IOS_ANTPA_SEL9_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL71;\
    CLR_IOS_GPIO1_24_CTRL1_1;\
    /*antpa_sel[9]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL71;\
\
    /*antpa_sel[10]管脚复用配置*/\
    SET_IOS_ANTPA_SEL10_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL72;\
    CLR_IOS_GPIO1_25_CTRL1_1;\
    /*antpa_sel[10]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL72;\
\
    /*antpa_sel[11]管脚复用配置*/\
    SET_IOS_ANTPA_SEL11_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL73;\
    CLR_IOS_GPIO1_26_CTRL1_1;\
    /*antpa_sel[11]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL73;\
\
    /*antpa_sel[12]管脚复用配置*/\
    SET_IOS_ANTPA_SEL12_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL74;\
    CLR_IOS_GPIO1_27_CTRL1_1;\
    /*antpa_sel[12]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL74;\
\
    /*antpa_sel[13]管脚复用配置*/\
    SET_IOS_ANTPA_SEL13_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL75;\
    CLR_IOS_GPIO1_28_CTRL1_1;\
    /*antpa_sel[13]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL75;\
\
    /*antpa_sel[14]管脚复用配置*/\
    SET_IOS_ANTPA_SEL14_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL76;\
    CLR_IOS_GPIO1_29_CTRL1_1;\
    /*antpa_sel[14]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL76;\
\
    /*antpa_sel[15]管脚复用配置*/\
    SET_IOS_ANTPA_SEL15_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL77;\
    CLR_IOS_GPIO1_30_CTRL1_1;\
    /*antpa_sel[15]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL77;\
\
    /*antpa_sel[16]管脚复用配置*/\
    SET_IOS_ANTPA_SEL16_CTRL1_1;\
    OUTSET_IOS_PD_IOM_CTRL78;\
    CLR_IOS_GPIO1_31_CTRL1_1;\
    /*antpa_sel[16]管脚上下拉配置*/\
    NASET_IOS_PD_IOM_CTRL78;\
\
\
/*配置ABB信号（18个PIN）*/\
\
/*配置LPDDR2信号（61个PIN） CA信号（16个PIN）*/\
\
/*配置LPDDR2信号（61个PIN） DQ信号（45个PIN）*/\
\
/*配置LPDDR2 KGD信号（1个PIN）*/\
\
/*配置PCIE（7个PIN）*/\
\
/*配置PCIE 差分时钟（2个PIN）*/\
\
/*配置HSIC（2个PIN）*/\
\
}while(0)

#endif

