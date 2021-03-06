/* ==========================================================================
 * $File: //dwh/usb_iip/dev/software/otg/linux/drivers/dwc_otg_attr.c $
 * $Revision: #44 $
 * $Date: 2010/11/29 $
 * $Change: 1636033 $
 *
 * Synopsys HS OTG Linux Software Driver and documentation (hereinafter,
 * "Software") is an Unsupported proprietary work of Synopsys, Inc. unless
 * otherwise expressly agreed to in writing between Synopsys and you.
 *
 * The Software IS NOT an item of Licensed Software or Licensed Product under
 * any End User Software License Agreement or Agreement for Licensed Product
 * with Synopsys or any supplement thereto. You are permitted to use and
 * redistribute this Software in source and binary forms, with or without
 * modification, provided that redistributions of source code must retain this
 * notice. You may not view, use, disclose, copy or distribute this file or
 * any information contained herein except pursuant to this license grant from
 * Synopsys. If you do not agree with this notice, including the disclaimer
 * below, then you are not authorized to use the Software.
 *
 * Alternatively, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") version 2 as published by the Free
 * Software Foundation.
 * 
 * THIS SOFTWARE IS BEING DISTRIBUTED BY SYNOPSYS SOLELY ON AN "AS IS" BASIS
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE HEREBY DISCLAIMED. IN NO EVENT SHALL SYNOPSYS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * ========================================================================== */

/** @file
 *
 * The diagnostic interface will provide access to the controller for
 * bringing up the hardware and testing.  The Linux driver attributes
 * feature will be used to provide the Linux Diagnostic
 * Interface. These attributes are accessed through sysfs.
 */

/** @page "Linux Module Attributes"
 *
 * The Linux module attributes feature is used to provide the Linux
 * Diagnostic Interface.  These attributes are accessed through sysfs.
 * The diagnostic interface will provide access to the controller for
 * bringing up the hardware and testing.

 The following table shows the attributes.
 <table>
 <tr>
 <td><b> Name</b></td>
 <td><b> Description</b></td>
 <td><b> Access</b></td>
 </tr>

 <tr>
 <td> mode </td>
 <td> Returns the current mode: 0 for device mode, 1 for host mode</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> hnpcapable </td>
 <td> Gets or sets the "HNP-capable" bit in the Core USB Configuraton Register.
 Read returns the current value.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> srpcapable </td>
 <td> Gets or sets the "SRP-capable" bit in the Core USB Configuraton Register.
 Read returns the current value.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> hsic_connect </td>
 <td> Gets or sets the "HSIC-Connect" bit in the GLPMCFG Register.
 Read returns the current value.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> inv_sel_hsic </td>
 <td> Gets or sets the "Invert Select HSIC" bit in the GLPMFG Register.
 Read returns the current value.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> hnp </td>
 <td> Initiates the Host Negotiation Protocol.  Read returns the status.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> srp </td>
 <td> Initiates the Session Request Protocol.  Read returns the status.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> buspower </td>
 <td> Gets or sets the Power State of the bus (0 - Off or 1 - On)</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> bussuspend </td>
 <td> Suspends the USB bus.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> busconnected </td>
 <td> Gets the connection status of the bus</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> gotgctl </td>
 <td> Gets or sets the Core Control Status Register.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> gusbcfg </td>
 <td> Gets or sets the Core USB Configuration Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> grxfsiz </td>
 <td> Gets or sets the Receive FIFO Size Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> gnptxfsiz </td>
 <td> Gets or sets the non-periodic Transmit Size Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> gpvndctl </td>
 <td> Gets or sets the PHY Vendor Control Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> ggpio </td>
 <td> Gets the value in the lower 16-bits of the General Purpose IO Register
 or sets the upper 16 bits.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> guid </td>
 <td> Gets or sets the value of the User ID Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> gsnpsid </td>
 <td> Gets the value of the Synopsys ID Regester</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> devspeed </td>
 <td> Gets or sets the device speed setting in the DCFG register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> enumspeed </td>
 <td> Gets the device enumeration Speed.</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> hptxfsiz </td>
 <td> Gets the value of the Host Periodic Transmit FIFO</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> hprt0 </td>
 <td> Gets or sets the value in the Host Port Control and Status Register</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> regoffset </td>
 <td> Sets the register offset for the next Register Access</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> regvalue </td>
 <td> Gets or sets the value of the register at the offset in the regoffset attribute.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> remote_wakeup </td>
 <td> On read, shows the status of Remote Wakeup. On write, initiates a remote
 wakeup of the host. When bit 0 is 1 and Remote Wakeup is enabled, the Remote
 Wakeup signalling bit in the Device Control Register is set for 1
 milli-second.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> rem_wakeup_pwrdn </td>
 <td> On read, shows the status core - hibernated or not. On write, initiates 
 a remote wakeup of the device from Hibernation. </td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> mode_ch_tim_en </td>
 <td> This bit is used to enable or disable the host core to wait for 200 PHY 
 clock cycles at the end of Resume to change the opmode signal to the PHY to 00
 after Suspend or LPM. </td>
 <td> Read/Write</td>
 </tr>
 
 <tr>
 <td> fr_interval </td>
 <td> On read, shows the value of HFIR Frame Interval. On write, dynamically 
 reload HFIR register during runtime. The application can write a value to this
 register only after the Port Enable bit of the Host Port Control and Status 
 register (HPRT.PrtEnaPort) has been set </td>
 <td> Read/Write</td>
 </tr>
 
 <tr>
 <td> disconnect_us </td>
 <td> On read, shows the status of disconnect_device_us. On write, sets disconnect_us
 which causes soft disconnect for 100us. Applicable only for device mode of operation.</td>
 <td> Read/Write</td>
 </tr>

 <tr>
 <td> regdump </td>
 <td> Dumps the contents of core registers.</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> spramdump </td>
 <td> Dumps the contents of core registers.</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> hcddump </td>
 <td> Dumps the current HCD state.</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> hcd_frrem </td>
 <td> Shows the average value of the Frame Remaining
 field in the Host Frame Number/Frame Remaining register when an SOF interrupt
 occurs. This can be used to determine the average interrupt latency. Also
 shows the average Frame Remaining value for start_transfer and the "a" and
 "b" sample points. The "a" and "b" sample points may be used during debugging
 bto determine how long it takes to execute a section of the HCD code.</td>
 <td> Read</td>
 </tr>

 <tr>
 <td> rd_reg_test </td>
 <td> Displays the time required to read the GNPTXFSIZ register many times
 (the output shows the number of times the register is read).
 <td> Read</td>
 </tr>

 <tr>
 <td> wr_reg_test </td>
 <td> Displays the time required to write the GNPTXFSIZ register many times
 (the output shows the number of times the register is written).
 <td> Read</td>
 </tr>

 <tr>
 <td> lpm_response </td>
 <td> Gets or sets lpm_response mode. Applicable only in device mode.
 <td> Write</td>
 </tr>

 <tr>
 <td> sleep_status </td>
 <td> Shows sleep status of device.
 <td> Read</td>
 </tr>

 </table>

 Example usage:
 To get the current mode:
 cat /sys/devices/lm0/mode

 To power down the USB:
 echo 0 > /sys/devices/lm0/buspower
 */

#include "dwc_otg_os_dep.h"
#include "dwc_os.h"
#include "dwc_otg_driver.h"
#include "dwc_otg_attr.h"
#include "dwc_otg_cil.h"
#include "dwc_otg_core_if.h"
#include "dwc_otg_pcd_if.h"
#include "dwc_otg_hcd_if.h"



#ifndef LM_INTERFACE
#define LM_INTERFACE
#endif

#ifdef CONFIG_USB_GADGET_SNPS_DWC_OTG
extern dwc_otg_device_t *g_dwc_otg_device;
#endif 

#ifdef CONFIG_USB_DWC_OTG_LPM
#include "usb.h"
#include "dwc_otg_hcd.h"
#include <linux/usb.h>
#include <linux/usb/hcd.h>

//dwc_otg_device_t *g_otgdev;
extern void dwc_otg_hcd_lpm_queue_transactions(dwc_otg_hcd_t *hcd, dwc_otg_transaction_type_e tr_type);
extern void dwc_otg_hcd_queue_transactions(dwc_otg_hcd_t * hcd, dwc_otg_transaction_type_e tr_type);
typedef int (*lpm_rwake_callback_p)(void);
extern void dwc_otg_hcd_free_hc_from_lpm(dwc_otg_hcd_t * hcd);
//void dwc_lpm_register_rwake_callback(lpm_rwake_callback_p callback);
//lpm_rwake_callback_p  lpm_rwake_callback= NULL;
#endif 
/*
 * MACROs for defining sysfs attribute
 */
#ifdef LM_INTERFACE

#define DWC_OTG_DEVICE_ATTR_BITFIELD_SHOW(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_show (struct device *_dev, struct device_attribute *attr, char *buf) \
{ \
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev); \
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);		\
	uint32_t val; \
	val = dwc_otg_get_##_otg_attr_name_ (otg_dev->core_if); \
	return sprintf (buf, "%s = 0x%x\n", _string_, val); \
}
#define DWC_OTG_DEVICE_ATTR_BITFIELD_STORE(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_store (struct device *_dev, struct device_attribute *attr, \
					const char *buf, size_t count) \
{ \
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev); \
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev); \
	uint32_t set = simple_strtoul(buf, NULL, 16); \
	dwc_otg_set_##_otg_attr_name_(otg_dev->core_if, set);\
	return count; \
}

#elif defined(PCI_INTERFACE)

#define DWC_OTG_DEVICE_ATTR_BITFIELD_SHOW(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_show (struct device *_dev, struct device_attribute *attr, char *buf) \
{ \
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);	\
	uint32_t val; \
	val = dwc_otg_get_##_otg_attr_name_ (otg_dev->core_if); \
	return sprintf (buf, "%s = 0x%x\n", _string_, val); \
}
#define DWC_OTG_DEVICE_ATTR_BITFIELD_STORE(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_store (struct device *_dev, struct device_attribute *attr, \
					const char *buf, size_t count) \
{ \
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);  \
	uint32_t set = simple_strtoul(buf, NULL, 16); \
	dwc_otg_set_##_otg_attr_name_(otg_dev->core_if, set);\
	return count; \
}

#endif

/*
 * MACROs for defining sysfs attribute for 32-bit registers
 */
#ifdef LM_INTERFACE
#define DWC_OTG_DEVICE_ATTR_REG_SHOW(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_show (struct device *_dev, struct device_attribute *attr, char *buf) \
{ \
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev); \
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev); \
	uint32_t val; \
	val = dwc_otg_get_##_otg_attr_name_ (otg_dev->core_if); \
	return sprintf (buf, "%s = 0x%08x\n", _string_, val); \
}
#define DWC_OTG_DEVICE_ATTR_REG_STORE(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_store (struct device *_dev, struct device_attribute *attr, \
					const char *buf, size_t count) \
{ \
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev); \
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev); \
	uint32_t val = simple_strtoul(buf, NULL, 16); \
	dwc_otg_set_##_otg_attr_name_ (otg_dev->core_if, val); \
	return count; \
}
#elif defined(PCI_INTERFACE)
#define DWC_OTG_DEVICE_ATTR_REG_SHOW(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_show (struct device *_dev, struct device_attribute *attr, char *buf) \
{ \
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);  \
	uint32_t val; \
	val = dwc_otg_get_##_otg_attr_name_ (otg_dev->core_if); \
	return sprintf (buf, "%s = 0x%08x\n", _string_, val); \
}
#define DWC_OTG_DEVICE_ATTR_REG_STORE(_otg_attr_name_,_string_) \
static ssize_t _otg_attr_name_##_store (struct device *_dev, struct device_attribute *attr, \
					const char *buf, size_t count) \
{ \
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);  \
	uint32_t val = simple_strtoul(buf, NULL, 16); \
	dwc_otg_set_##_otg_attr_name_ (otg_dev->core_if, val); \
	return count; \
}

#endif

#define DWC_OTG_DEVICE_ATTR_BITFIELD_RW(_otg_attr_name_,_string_) \
DWC_OTG_DEVICE_ATTR_BITFIELD_SHOW(_otg_attr_name_,_string_) \
DWC_OTG_DEVICE_ATTR_BITFIELD_STORE(_otg_attr_name_,_string_) \
DEVICE_ATTR(_otg_attr_name_,0644,_otg_attr_name_##_show,_otg_attr_name_##_store);

#define DWC_OTG_DEVICE_ATTR_BITFIELD_RO(_otg_attr_name_,_string_) \
DWC_OTG_DEVICE_ATTR_BITFIELD_SHOW(_otg_attr_name_,_string_) \
DEVICE_ATTR(_otg_attr_name_,0444,_otg_attr_name_##_show,NULL);

#define DWC_OTG_DEVICE_ATTR_REG32_RW(_otg_attr_name_,_addr_,_string_) \
DWC_OTG_DEVICE_ATTR_REG_SHOW(_otg_attr_name_,_string_) \
DWC_OTG_DEVICE_ATTR_REG_STORE(_otg_attr_name_,_string_) \
DEVICE_ATTR(_otg_attr_name_,0644,_otg_attr_name_##_show,_otg_attr_name_##_store);

#define DWC_OTG_DEVICE_ATTR_REG32_RO(_otg_attr_name_,_addr_,_string_) \
DWC_OTG_DEVICE_ATTR_REG_SHOW(_otg_attr_name_,_string_) \
DEVICE_ATTR(_otg_attr_name_,0444,_otg_attr_name_##_show,NULL);

/** @name Functions for Show/Store of Attributes */
/**@{*/

/**
 * Show the register offset of the Register Access.
 */
static ssize_t regoffset_show(struct device *_dev,
			      struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	return snprintf(buf, sizeof("0xFFFFFFFF\n") + 1, "0x%08x\n",
			otg_dev->os_dep.reg_offset);
}

/**
 * Set the register offset for the next Register Access 	Read/Write
 */
static ssize_t regoffset_store(struct device *_dev,
			       struct device_attribute *attr,
			       const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t offset = simple_strtoul(buf, NULL, 16);
#ifdef LM_INTERFACE
	if (offset < SZ_256K) {
#elif  defined(PCI_INTERFACE)
	if (offset < 0x00040000) {
#endif
		otg_dev->os_dep.reg_offset = offset;
	} else {
		dev_err(_dev, "invalid offset\n");
	}

	return count;
}

DEVICE_ATTR(regoffset, S_IRUGO | S_IWUSR, regoffset_show, regoffset_store);

/**
 * Show the value of the register at the offset in the reg_offset
 * attribute.
 */
static ssize_t regvalue_show(struct device *_dev,
			     struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t val;
	volatile uint32_t *addr;

	if (otg_dev->os_dep.reg_offset != 0xFFFFFFFF && 0 != otg_dev->os_dep.base) {
		/* Calculate the address */
		addr = (uint32_t *) (otg_dev->os_dep.reg_offset +
				     (uint8_t *) otg_dev->os_dep.base);
		val = DWC_READ_REG32(addr);
		return snprintf(buf,
				sizeof("Reg@0xFFFFFFFF = 0xFFFFFFFF\n") + 1,
				"Reg@0x%06x = 0x%08x\n", otg_dev->os_dep.reg_offset,
				val);
	} else {
		dev_err(_dev, "Invalid offset (0x%0x)\n", otg_dev->os_dep.reg_offset);
		/* coverity[secure_coding] */
		return sprintf(buf, "invalid offset\n");
	}
}

/**
 * Store the value in the register at the offset in the reg_offset
 * attribute.
 *
 */
static ssize_t regvalue_store(struct device *_dev,
			      struct device_attribute *attr,
			      const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	volatile uint32_t *addr;
	uint32_t val = simple_strtoul(buf, NULL, 16);
	//dev_dbg(_dev, "Offset=0x%08x Val=0x%08x\n", otg_dev->reg_offset, val);
	if (otg_dev->os_dep.reg_offset != 0xFFFFFFFF && 0 != otg_dev->os_dep.base) {
		/* Calculate the address */
		addr = (uint32_t *) (otg_dev->os_dep.reg_offset +
				     (uint8_t *) otg_dev->os_dep.base);
		DWC_WRITE_REG32(addr, val);
	} else {
		dev_err(_dev, "Invalid Register Offset (0x%08x)\n",
			otg_dev->os_dep.reg_offset);
	}
	return count;
}

DEVICE_ATTR(regvalue, S_IRUGO | S_IWUSR, regvalue_show, regvalue_store);

/*
 * Attributes
 */
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RO(mode, "Mode");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RW(hnpcapable, "HNPCapable");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RW(srpcapable, "SRPCapable");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RW(hsic_connect, "HSIC Connect");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RW(inv_sel_hsic, "Invert Select HSIC");

//DWC_OTG_DEVICE_ATTR_BITFIELD_RW(buspower,&(otg_dev->core_if->core_global_regs->gotgctl),(1<<8),8,"Mode");
//DWC_OTG_DEVICE_ATTR_BITFIELD_RW(bussuspend,&(otg_dev->core_if->core_global_regs->gotgctl),(1<<8),8,"Mode");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RO(busconnected, "Bus Connected");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(gotgctl, 0, "GOTGCTL");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(gusbcfg,
			     &(otg_dev->core_if->core_global_regs->gusbcfg),
			     "GUSBCFG");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(grxfsiz,
			     &(otg_dev->core_if->core_global_regs->grxfsiz),
			     "GRXFSIZ");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(gnptxfsiz,
			     &(otg_dev->core_if->core_global_regs->gnptxfsiz),
			     "GNPTXFSIZ");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(gpvndctl,
			     &(otg_dev->core_if->core_global_regs->gpvndctl),
			     "GPVNDCTL");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(ggpio,
			     &(otg_dev->core_if->core_global_regs->ggpio),
			     "GGPIO");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(guid, &(otg_dev->core_if->core_global_regs->guid),
			     "GUID");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RO(gsnpsid,
			     &(otg_dev->core_if->core_global_regs->gsnpsid),
			     "GSNPSID");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RW(devspeed, "Device Speed");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_BITFIELD_RO(enumspeed, "Device Enumeration Speed");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RO(hptxfsiz,
			     &(otg_dev->core_if->core_global_regs->hptxfsiz),
			     "HPTXFSIZ");
/* coverity[secure_coding] */
DWC_OTG_DEVICE_ATTR_REG32_RW(hprt0, otg_dev->core_if->host_if->hprt0, "HPRT0");

/**
 * @todo Add code to initiate the HNP.
 */
/**
 * Show the HNP status bit
 */
static ssize_t hnp_show(struct device *_dev,
			struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "HstNegScs = 0x%x\n",
		       dwc_otg_get_hnpstatus(otg_dev->core_if));
}

/**
 * Set the HNP Request bit
 */
static ssize_t hnp_store(struct device *_dev,
			 struct device_attribute *attr,
			 const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	uint32_t in = simple_strtoul(buf, NULL, 16);
	dwc_otg_set_hnpreq(otg_dev->core_if, in);
	return count;
}

DEVICE_ATTR(hnp, 0644, hnp_show, hnp_store);

/**
 * @todo Add code to initiate the SRP.
 */
/**
 * Show the SRP status bit
 */
static ssize_t srp_show(struct device *_dev,
			struct device_attribute *attr, char *buf)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "SesReqScs = 0x%x\n",
		       dwc_otg_get_srpstatus(otg_dev->core_if));
#else
	/* coverity[secure_coding] */
	return sprintf(buf, "Host Only Mode!\n");
#endif
}

/**
 * Set the SRP Request bit
 */
static ssize_t srp_store(struct device *_dev,
			 struct device_attribute *attr,
			 const char *buf, size_t count)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	dwc_otg_pcd_initiate_srp(otg_dev->pcd);
#endif
	return count;
}

DEVICE_ATTR(srp, 0644, srp_show, srp_store);

/**
 * @todo Need to do more for power on/off?
 */
/**
 * Show the Bus Power status
 */
static ssize_t buspower_show(struct device *_dev,
			     struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "Bus Power = 0x%x\n",
		       dwc_otg_get_prtpower(otg_dev->core_if));
}

/**
 * Set the Bus Power status
 */
static ssize_t buspower_store(struct device *_dev,
			      struct device_attribute *attr,
			      const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	uint32_t on = simple_strtoul(buf, NULL, 16);
	dwc_otg_set_prtpower(otg_dev->core_if, on);
	return count;
}

DEVICE_ATTR(buspower, 0644, buspower_show, buspower_store);

/**
 * @todo Need to do more for suspend?
 */
/**
 * Show the Bus Suspend status
 */
static ssize_t bussuspend_show(struct device *_dev,
			       struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "Bus Suspend = 0x%x\n",
		       dwc_otg_get_prtsuspend(otg_dev->core_if));
}

/**
 * Set the Bus Suspend status
 */
static ssize_t bussuspend_store(struct device *_dev,
				struct device_attribute *attr,
				const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t in = simple_strtoul(buf, NULL, 16);
	dwc_otg_set_prtsuspend(otg_dev->core_if, in);
	return count;
}

DEVICE_ATTR(bussuspend, 0644, bussuspend_show, bussuspend_store);

/**
 * Show the Mode Change Ready Timer status
 */
static ssize_t mode_ch_tim_en_show(struct device *_dev,
				   struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "Mode Change Ready Timer Enable = 0x%x\n",
		       dwc_otg_get_mode_ch_tim(otg_dev->core_if));
}

/**
 * Set the Mode Change Ready Timer status
 */
static ssize_t mode_ch_tim_en_store(struct device *_dev,
				    struct device_attribute *attr,
				    const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t in = simple_strtoul(buf, NULL, 16);
	dwc_otg_set_mode_ch_tim(otg_dev->core_if, in);
	return count;
}

DEVICE_ATTR(mode_ch_tim_en, 0644, mode_ch_tim_en_show, mode_ch_tim_en_store);

/**
 * Show the value of HFIR Frame Interval bitfield
 */
static ssize_t fr_interval_show(struct device *_dev,
				struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "Frame Interval = 0x%x\n",
		       dwc_otg_get_fr_interval(otg_dev->core_if));
}

/**
 * Set the HFIR Frame Interval value
 */
static ssize_t fr_interval_store(struct device *_dev,
				 struct device_attribute *attr,
				 const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t in = simple_strtoul(buf, NULL, 10);
	dwc_otg_set_fr_interval(otg_dev->core_if, in);
	return count;
}

DEVICE_ATTR(fr_interval, 0644, fr_interval_show, fr_interval_store);

/**
 * Show the status of Remote Wakeup.
 */
static ssize_t remote_wakeup_show(struct device *_dev,
				  struct device_attribute *attr, char *buf)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf,
		       "Remote Wakeup Sig = %d Enabled = %d LPM Remote Wakeup = %d\n",
		       dwc_otg_get_remotewakesig(otg_dev->core_if),
		       dwc_otg_pcd_get_rmwkup_enable(otg_dev->pcd),
		       dwc_otg_get_lpm_remotewakeenabled(otg_dev->core_if));
#else
	/* coverity[secure_coding] */
	return sprintf(buf, "Host Only Mode!\n");
#endif /* DWC_HOST_ONLY */
}

/**
 * Initiate a remote wakeup of the host.  The Device control register
 * Remote Wakeup Signal bit is written if the PCD Remote wakeup enable
 * flag is set.
 *
 */
static ssize_t remote_wakeup_store(struct device *_dev,
				   struct device_attribute *attr,
				   const char *buf, size_t count)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t val = simple_strtoul(buf, NULL, 16);

	if (val & 1) {
		dwc_otg_pcd_remote_wakeup(otg_dev->pcd, 1);
	} else {
		dwc_otg_pcd_remote_wakeup(otg_dev->pcd, 0);
	}
#endif /* DWC_HOST_ONLY */
	return count;
}

DEVICE_ATTR(remote_wakeup, S_IRUGO | S_IWUSR, remote_wakeup_show,
	    remote_wakeup_store);

/**
 * Show the whether core is hibernated or not. 					
 */
static ssize_t rem_wakeup_pwrdn_show(struct device *_dev,
				     struct device_attribute *attr, char *buf)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	if (dwc_otg_get_core_state(otg_dev->core_if)) {
		DWC_PRINTF("Core is in hibernation\n");
	} else {
		DWC_PRINTF("Core is not in hibernation\n");
	}
#endif /* DWC_HOST_ONLY */
	return 0;
}

extern int dwc_otg_device_hibernation_restore(dwc_otg_core_if_t * core_if,
					      int rem_wakeup, int reset);

/**
 * Initiate a remote wakeup of the device to exit from hibernation.
 */
static ssize_t rem_wakeup_pwrdn_store(struct device *_dev,
				      struct device_attribute *attr,
				      const char *buf, size_t count)
{
#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	dwc_otg_device_hibernation_restore(otg_dev->core_if, 1, 0);
#endif
	return count;
}

DEVICE_ATTR(rem_wakeup_pwrdn, S_IRUGO | S_IWUSR, rem_wakeup_pwrdn_show,
	    rem_wakeup_pwrdn_store);

static ssize_t disconnect_us(struct device *_dev,
			     struct device_attribute *attr,
			     const char *buf, size_t count)
{

#ifndef DWC_HOST_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	uint32_t val = simple_strtoul(buf, NULL, 16);
	DWC_PRINTF("The Passed value is %04x\n", val);

	dwc_otg_pcd_disconnect_us(otg_dev->pcd, 50);

#endif /* DWC_HOST_ONLY */
	return count;
}

DEVICE_ATTR(disconnect_us, S_IWUSR, 0, disconnect_us);

/**
 * Dump global registers and either host or device registers (depending on the
 * current mode of the core).
 */
static ssize_t regdump_show(struct device *_dev,
			    struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	dwc_otg_dump_global_registers(otg_dev->core_if);
	if (dwc_otg_is_host_mode(otg_dev->core_if)) {
		dwc_otg_dump_host_registers(otg_dev->core_if);
	} else {
		dwc_otg_dump_dev_registers(otg_dev->core_if);

	}
	/* coverity[secure_coding] */
	return sprintf(buf, "Register Dump\n");
}

DEVICE_ATTR(regdump, S_IRUGO | S_IWUSR, regdump_show, 0);

/**
 * Dump global registers and either host or device registers (depending on the
 * current mode of the core).
 */
static ssize_t spramdump_show(struct device *_dev,
			      struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	dwc_otg_dump_spram(otg_dev->core_if);
	/* coverity[secure_coding] */
	return sprintf(buf, "SPRAM Dump\n");
}

DEVICE_ATTR(spramdump, S_IRUGO | S_IWUSR, spramdump_show, 0);

/**
 * Dump the current hcd state.
 */
static ssize_t hcddump_show(struct device *_dev,
			    struct device_attribute *attr, char *buf)
{
#ifndef DWC_DEVICE_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	dwc_otg_hcd_dump_state(otg_dev->hcd);
#endif /* DWC_DEVICE_ONLY */
	/* coverity[secure_coding] */
	return sprintf(buf, "HCD Dump\n");
}

DEVICE_ATTR(hcddump, S_IRUGO | S_IWUSR, hcddump_show, 0);

/**
 * Dump the average frame remaining at SOF. This can be used to
 * determine average interrupt latency. Frame remaining is also shown for
 * start transfer and two additional sample points.
 */
static ssize_t hcd_frrem_show(struct device *_dev,
			      struct device_attribute *attr, char *buf)
{
#ifndef DWC_DEVICE_ONLY
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	dwc_otg_hcd_dump_frrem(otg_dev->hcd);
#endif /* DWC_DEVICE_ONLY */
	/* coverity[check_return] */
	/* coverity[secure_coding] */
	return sprintf(buf, "HCD Dump Frame Remaining\n");
}

DEVICE_ATTR(hcd_frrem, S_IRUGO | S_IWUSR, hcd_frrem_show, 0);

/**
 * Displays the time required to read the GNPTXFSIZ register many times (the
 * output shows the number of times the register is read).
 */
#define RW_REG_COUNT 10000000
#define MSEC_PER_JIFFIE 1000/HZ
static ssize_t rd_reg_test_show(struct device *_dev,
				struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	int i;
	int time;
	int start_jiffies;

	printk("HZ %d, MSEC_PER_JIFFIE %d, loops_per_jiffy %lu\n",
	       HZ, MSEC_PER_JIFFIE, loops_per_jiffy);
	start_jiffies = jiffies;
	for (i = 0; i < RW_REG_COUNT; i++) {
		dwc_otg_get_gnptxfsiz(otg_dev->core_if);
	}
	time = jiffies - start_jiffies;
	/* coverity[secure_coding] */
	return sprintf(buf,
		       "Time to read GNPTXFSIZ reg %d times: %d msecs (%d jiffies)\n",
		       RW_REG_COUNT, time * MSEC_PER_JIFFIE, time);
}

DEVICE_ATTR(rd_reg_test, S_IRUGO | S_IWUSR, rd_reg_test_show, 0);

/**
 * Displays the time required to write the GNPTXFSIZ register many times (the
 * output shows the number of times the register is written).
 */
static ssize_t wr_reg_test_show(struct device *_dev,
				struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t reg_val;
	int i;
	int time;
	int start_jiffies;

	printk("HZ %d, MSEC_PER_JIFFIE %d, loops_per_jiffy %lu\n",
	       HZ, MSEC_PER_JIFFIE, loops_per_jiffy);
	reg_val = dwc_otg_get_gnptxfsiz(otg_dev->core_if);
	start_jiffies = jiffies;
	for (i = 0; i < RW_REG_COUNT; i++) {
		dwc_otg_set_gnptxfsiz(otg_dev->core_if, reg_val);
	}
	time = jiffies - start_jiffies;
	/* coverity[secure_coding] */
	return sprintf(buf,
		       "Time to write GNPTXFSIZ reg %d times: %d msecs (%d jiffies)\n",
		       RW_REG_COUNT, time * MSEC_PER_JIFFIE, time);
}

DEVICE_ATTR(wr_reg_test, S_IRUGO | S_IWUSR, wr_reg_test_show, 0);

#ifdef CONFIG_USB_DWC_OTG_LPM

struct local_wrapper_priv_data {
	dwc_otg_hcd_t *dwc_otg_hcd;
};


/** Gets the dwc_otg_hcd from a struct usb_hcd */
static inline dwc_otg_hcd_t *local_hcd_to_dwc_otg_hcd(struct usb_hcd *hcd)
{
	struct local_wrapper_priv_data *p;
	p = (struct local_wrapper_priv_data *)(hcd->hcd_priv);
	return p->dwc_otg_hcd;
}


/*send the lpm frame to wifi device*/
/*
  return:
  0 = NO LPM
  1 = LPM
*/
int g_send_lpm = 0; /* make sure we don't call LPM wake up repeatedly, 
                       because we enter LPM in one place, but we exit anywhere */

int g_free_lpm_channel = 0;

/* 
  we need to check whether we can enter LPM.
  we can enter LPM if there is only one channel enabled.
  Otherwise, we can't do this.
*/
int LPM_able(struct usb_hcd* hcd)
{
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);
	int num_channels;
	int i;
	int enabled_channels = 0;

	num_channels = dwc_otg_hcd->core_if->core_params->host_channels;

	for (i = 0; i < num_channels; i++) {

		hcchar_data_t hcchar;
		/* dwc_hc_t *hc = dwc_otg_hcd->hc_ptr_array[i];*/

		hcchar.d32 =
			DWC_READ_REG32(&dwc_otg_hcd->core_if->host_if->
				   hc_regs[i]->hcchar);
		if (hcchar.b.chen == 1)
		{
            enabled_channels++;
		}
	}

	return enabled_channels;

}
EXPORT_SYMBOL(LPM_able);

int LPM_send(struct usb_hcd *hcd)
{
    int addr = 2 ;
    int index =0 ;
    int ret = 0;
	dwc_irqflags_t flags;
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);

	//DWC_PRINTF("LPM_send\n");

	DWC_SPINLOCK_IRQSAVE(dwc_otg_hcd->lock, &flags);

	if (!dwc_otg_get_lpm_portsleepstatus(dwc_otg_hcd->core_if))
	{
		;
	}
	else
	{
		DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);
		return 1;
	}

	/* LPM is sent */
	g_send_lpm = 1;
	g_free_lpm_channel = 1;

    index = 1 | (12<<4 ) | (addr << 8 ) |(1 << 15);
    dwc_otg_hcd_hub_control(dwc_otg_hcd,UCR_SET_AND_TEST_PORT_FEATURE,UHF_PORT_L1,index,(u8 *)&ret,1);
	DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);

    //printk("====transfer to L1(sleep) result = %d\n" , ret);

	return 0;
}
EXPORT_SYMBOL(LPM_send);

/*check LPM status*/
/*
  return:
  0 = NO LPM
  1 = LPM
*/
int LPM_status(struct usb_hcd *hcd)
{
	dwc_irqflags_t flags;
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);

	//DWC_PRINTF("LPM_status\n");

	DWC_SPINLOCK_IRQSAVE(dwc_otg_hcd->lock, &flags);

	if (!dwc_otg_get_lpm_portsleepstatus(dwc_otg_hcd->core_if))
	{
		DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);
		return 0;
	}
	else
	{
		DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);
		return 1;
	}
}
EXPORT_SYMBOL(LPM_status);

int LPM_free_lpm_channel(struct usb_hcd *hcd)
{
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);

	/* if we haven't got the LPM interrupt, we need to free LPM channel */
	if (g_free_lpm_channel) 
	{
		DWC_PRINTF("WARN!\n");
		dwc_otg_hcd_free_hc_from_lpm(dwc_otg_hcd);
		return 1;
	}

	return 0;

}
EXPORT_SYMBOL(LPM_free_lpm_channel);


void LPM_wakeup(struct usb_hcd *hcd)
{
    dwc_irqflags_t flags;
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);

	//DWC_PRINTF("LPM_wakeup\n");

	DWC_SPINLOCK_IRQSAVE(dwc_otg_hcd->lock, &flags);

	if (!g_send_lpm) {

		/* LPM is not sent, just return */
		//DWC_PRINTF("LPM NOT SEND\n");
		DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);
		return;
	}

	/* if we have sent LPM request, we need to resume LPM regs. */
	if (dwc_otg_get_lpm_portsleepstatus(dwc_otg_hcd->core_if))
	{
		if (dwc_otg_is_host_mode(dwc_otg_hcd->core_if))
		{
		    dwc_otg_set_prtresume(dwc_otg_hcd->core_if, 1);
		    //DWC_PRINTF("Host initiated resume\n");
		}
	}

	/* we must have called wakeup */
    g_send_lpm = 0;	

	DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);

}

void LPM_restart_transfer(struct usb_hcd *hcd)
{
	dwc_otg_hcd_t *dwc_otg_hcd = local_hcd_to_dwc_otg_hcd(hcd);
	dwc_irqflags_t flags;

	DWC_SPINLOCK_IRQSAVE(dwc_otg_hcd->lock, &flags);

	if (!DWC_LIST_EMPTY(&dwc_otg_hcd->non_periodic_sched_active))
	{
        //DWC_PRINTF("active \n");
    }
	else 
	{
		DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);
		return;
	}

	DWC_SPINUNLOCK_IRQRESTORE(dwc_otg_hcd->lock, flags);

	dwc_otg_hcd_lpm_queue_transactions(dwc_otg_hcd,DWC_OTG_TRANSACTION_NON_PERIODIC);
     	
}


void LPM_restart_dispatch(dwc_otg_device_t *otg_dev)
{
	dwc_irqflags_t flags;

	DWC_SPINLOCK_IRQSAVE(otg_dev->hcd->lock, &flags);

	if (!DWC_LIST_EMPTY(&otg_dev->hcd->non_periodic_sched_active))
	{
        //DWC_PRINTF("active \n");
    }
	else 
	{
		DWC_SPINUNLOCK_IRQRESTORE(otg_dev->hcd->lock, flags);
		return;
	}

	DWC_SPINUNLOCK_IRQRESTORE(otg_dev->hcd->lock, flags);

	dwc_otg_hcd_lpm_queue_transactions(otg_dev->hcd,DWC_OTG_TRANSACTION_NON_PERIODIC);
     	
}

EXPORT_SYMBOL(LPM_restart_transfer);
EXPORT_SYMBOL(LPM_wakeup);


/**
* Show the lpm_response attribute.
*/
static ssize_t lpmresp_show(struct device *_dev,
			    struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	if (!dwc_otg_get_param_lpm_enable(otg_dev->core_if))
		/* coverity[secure_coding] */
		return sprintf(buf, "** LPM is DISABLED **\n");

	if (!dwc_otg_is_device_mode(otg_dev->core_if)) {
		/* coverity[secure_coding] */
		return sprintf(buf, "** Current mode is not device mode\n");
	}
	/* coverity[secure_coding] */
	return sprintf(buf, "lpm_response = %d\n",
		       dwc_otg_get_lpmresponse(otg_dev->core_if));
}

/**
* Store the lpm_response attribute.
*/
static ssize_t lpmresp_store(struct device *_dev,
			     struct device_attribute *attr,
			     const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

	uint32_t val = simple_strtoul(buf, NULL, 16);

	if (!dwc_otg_get_param_lpm_enable(otg_dev->core_if)) {
		return 0;
	}

	if (!dwc_otg_is_device_mode(otg_dev->core_if)) {
		return 0;
	}

	dwc_otg_set_lpmresponse(otg_dev->core_if, val);
	return count;
}

DEVICE_ATTR(lpm_response, S_IRUGO | S_IWUSR, lpmresp_show, lpmresp_store);

/**
* Show the sleep_status attribute.
*/
static ssize_t sleepstatus_show(struct device *_dev,
				struct device_attribute *attr, char *buf)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif
	/* coverity[secure_coding] */
	return sprintf(buf, "Sleep Status = %d\n",
		       dwc_otg_get_lpm_portsleepstatus(otg_dev->core_if));
}


#ifdef CONFIG_USB_GADGET_SNPS_DWC_OTG
void  dwc_otg_enter_suspend(void)
{
    int index =0 ;
	int addr =1 ;
	unsigned int ret = 0;
    /* suspend mode */
    index = addr;
	printk("suspend %s %d \n", __FUNCTION__,__LINE__);
	dwc_otg_device_t *otg_dev = g_dwc_otg_device;
	if ( NULL != otg_dev &&NULL != otg_dev->hcd )
    {
        dwc_otg_hcd_hub_control(otg_dev->hcd,UCR_SET_PORT_FEATURE,
        UHF_PORT_SUSPEND, index, (u8 *)&ret, 1);
        printk("====>HSIC SUSPEND\n");
    }
}
EXPORT_SYMBOL(dwc_otg_enter_suspend);

void dwc_otg_exit_suspend(void)
{
    int index =0 ;
	int addr =1 ;
	unsigned int ret = 0;
    /* suspend resume */
	index = addr;
	printk("resume %s %d \n", __FUNCTION__,__LINE__);
	dwc_otg_device_t *otg_dev = g_dwc_otg_device;
	if ( NULL != otg_dev && NULL != otg_dev->hcd )
	    {
            dwc_otg_hcd_hub_control(otg_dev->hcd,UCR_CLEAR_PORT_FEATURE,
            UHF_PORT_SUSPEND, index, (u8 *)&ret, 1);
	        printk("====>HSIC RESUME\n");
	    }

}
EXPORT_SYMBOL(dwc_otg_exit_suspend);
#endif


/**
 * Store the sleep_status attribure.
 */
static ssize_t sleepstatus_store(struct device *_dev,
				 struct device_attribute *attr,
				 const char *buf, size_t count)
{
#ifdef LM_INTERFACE
	struct lm_device *lm_dev = container_of(_dev, struct lm_device, dev);
	dwc_otg_device_t *otg_dev = lm_get_drvdata(lm_dev);
#elif defined(PCI_INTERFACE)
	dwc_otg_device_t *otg_dev = dev_get_drvdata(_dev);
#endif

    int mode = -1;
    unsigned int ret = 0;
    int addr;

	dwc_otg_core_if_t *core_if = otg_dev->core_if;
    /* coverity[secure_coding] */
    (void)sscanf(buf, "%d %d", &mode, &addr);

    /* trigger the device to enter L1(sleep) */
    if (mode == 0)
    {/* deep sleep mode */
        int index;
        index = 1 | (12 << 4) | (addr << 8) | (1 << 15);
        dwc_otg_hcd_hub_control(otg_dev->hcd,UCR_SET_AND_TEST_PORT_FEATURE,
            UHF_PORT_L1, index, (u8 *)&ret, 1);
        printk("====transfer to L1(sleep) result =%d\n",ret);
    }
    else if (mode == 1)
    {
    	if (dwc_otg_get_lpm_portsleepstatus(otg_dev->core_if)) {
    		if (dwc_otg_is_host_mode(core_if)) {

    			DWC_PRINTF("Host initiated resume\n");

    			dwc_otg_set_prtresume(otg_dev->core_if, 1);
    		}
        }
    }
    if (mode == 2)
    {
    	/* suspend mode */
        int index = addr;
        dwc_otg_hcd_hub_control(otg_dev->hcd,UCR_SET_PORT_FEATURE,
            UHF_PORT_SUSPEND, index, (u8 *)&ret, 1);
        printk("====>HSIC SUSPEND\n");
    }
    else if (mode == 3)
    {
    	/* suspend resume */
		int index = addr;
        dwc_otg_hcd_hub_control(otg_dev->hcd,UCR_CLEAR_PORT_FEATURE,
            UHF_PORT_SUSPEND, index, (u8 *)&ret, 1);
		printk("====>HSIC RESUME\n");

    }
#ifdef CONFIG_USB_DWC_OTG_LPM
    
	else if (mode == 5)
	{

		if (!DWC_LIST_EMPTY(&otg_dev->hcd->non_periodic_sched_active))
		{
			DWC_PRINTF("active\n");
		}

		dwc_otg_hcd_lpm_queue_transactions(otg_dev->hcd, DWC_OTG_TRANSACTION_NON_PERIODIC);

	}
#endif

	return count;
}

DEVICE_ATTR(sleep_status, S_IRUGO | S_IWUSR, sleepstatus_show,
	    sleepstatus_store);

#endif /* CONFIG_USB_DWC_OTG_LPM_ENABLE */

/**@}*/

/**
 * Create the device files
 */
void dwc_otg_attr_create(
#ifdef LM_INTERFACE
				struct lm_device *dev
#elif  defined(PCI_INTERFACE)
				struct pci_dev *dev
#endif
    )
{
	int error;/* [false alarm]:fortify disable */

	error = device_create_file(&dev->dev, &dev_attr_regoffset);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_regvalue);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_mode);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hnpcapable);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_srpcapable);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hsic_connect);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_inv_sel_hsic);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hnp);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_srp);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_buspower);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_bussuspend);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_mode_ch_tim_en);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_fr_interval);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_busconnected);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_gotgctl);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_gusbcfg);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_grxfsiz);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_gnptxfsiz);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_gpvndctl);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_ggpio);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_guid);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_gsnpsid);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_devspeed);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_enumspeed);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hptxfsiz);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hprt0);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_remote_wakeup);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_rem_wakeup_pwrdn);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_disconnect_us);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_regdump);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_spramdump);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hcddump);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_hcd_frrem);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_rd_reg_test);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_wr_reg_test);/* [false alarm]:fortify disable */
#ifdef CONFIG_USB_DWC_OTG_LPM
	error = device_create_file(&dev->dev, &dev_attr_lpm_response);/* [false alarm]:fortify disable */
	error = device_create_file(&dev->dev, &dev_attr_sleep_status);/* [false alarm]:fortify disable */
#endif
}

/**
 * Remove the device files
 */
void dwc_otg_attr_remove(
#ifdef LM_INTERFACE
				struct lm_device *dev
#elif  defined(PCI_INTERFACE)
				struct pci_dev *dev
#endif
    )
{
	device_remove_file(&dev->dev, &dev_attr_regoffset);
	device_remove_file(&dev->dev, &dev_attr_regvalue);
	device_remove_file(&dev->dev, &dev_attr_mode);
	device_remove_file(&dev->dev, &dev_attr_hnpcapable);
	device_remove_file(&dev->dev, &dev_attr_srpcapable);
	device_remove_file(&dev->dev, &dev_attr_hsic_connect);
	device_remove_file(&dev->dev, &dev_attr_inv_sel_hsic);
	device_remove_file(&dev->dev, &dev_attr_hnp);
	device_remove_file(&dev->dev, &dev_attr_srp);
	device_remove_file(&dev->dev, &dev_attr_buspower);
	device_remove_file(&dev->dev, &dev_attr_bussuspend);
	device_remove_file(&dev->dev, &dev_attr_mode_ch_tim_en);
	device_remove_file(&dev->dev, &dev_attr_fr_interval);
	device_remove_file(&dev->dev, &dev_attr_busconnected);
	device_remove_file(&dev->dev, &dev_attr_gotgctl);
	device_remove_file(&dev->dev, &dev_attr_gusbcfg);
	device_remove_file(&dev->dev, &dev_attr_grxfsiz);
	device_remove_file(&dev->dev, &dev_attr_gnptxfsiz);
	device_remove_file(&dev->dev, &dev_attr_gpvndctl);
	device_remove_file(&dev->dev, &dev_attr_ggpio);
	device_remove_file(&dev->dev, &dev_attr_guid);
	device_remove_file(&dev->dev, &dev_attr_gsnpsid);
	device_remove_file(&dev->dev, &dev_attr_devspeed);
	device_remove_file(&dev->dev, &dev_attr_enumspeed);
	device_remove_file(&dev->dev, &dev_attr_hptxfsiz);
	device_remove_file(&dev->dev, &dev_attr_hprt0);
	device_remove_file(&dev->dev, &dev_attr_remote_wakeup);
	device_remove_file(&dev->dev, &dev_attr_rem_wakeup_pwrdn);
	device_remove_file(&dev->dev, &dev_attr_disconnect_us);
	device_remove_file(&dev->dev, &dev_attr_regdump);
	device_remove_file(&dev->dev, &dev_attr_spramdump);
	device_remove_file(&dev->dev, &dev_attr_hcddump);
	device_remove_file(&dev->dev, &dev_attr_hcd_frrem);
	device_remove_file(&dev->dev, &dev_attr_rd_reg_test);
	device_remove_file(&dev->dev, &dev_attr_wr_reg_test);
#ifdef CONFIG_USB_DWC_OTG_LPM
	device_remove_file(&dev->dev, &dev_attr_lpm_response);
	device_remove_file(&dev->dev, &dev_attr_sleep_status);
#endif
}
