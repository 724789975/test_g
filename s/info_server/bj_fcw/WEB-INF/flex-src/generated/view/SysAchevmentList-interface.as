
package view
{
import component.MyDataGrid;
import flash.accessibility.*;
import flash.debugger.*;
import flash.display.*;
import flash.errors.*;
import flash.events.*;
import flash.external.*;
import flash.filters.*;
import flash.geom.*;
import flash.media.*;
import flash.net.*;
import flash.printing.*;
import flash.profiler.*;
import flash.system.*;
import flash.text.*;
import flash.ui.*;
import flash.utils.*;
import flash.xml.*;
import mx.binding.*;
import mx.containers.TitleWindow;
import mx.controls.Button;
import mx.controls.CheckBox;
import mx.core.ClassFactory;
import mx.core.DeferredInstanceFromClass;
import mx.core.DeferredInstanceFromFunction;
import mx.core.IDeferredInstance;
import mx.core.IFactory;
import mx.core.IPropertyChangeNotifier;
import mx.core.mx_internal;
import mx.styles.*;
import mx.containers.ControlBar;
import mx.containers.ApplicationControlBar;
import mx.containers.TitleWindow;
import mx.containers.VBox;

public class SysAchevmentList extends mx.containers.TitleWindow
{
	public function SysAchevmentList() {}

	[Bindable]
	public var datagrid : component.MyDataGrid;
	[Bindable]
	public var save : mx.controls.Button;
	[Bindable]
	public var cancel : mx.controls.Button;
	[Bindable]
	public var selectAll : mx.controls.CheckBox;

	mx_internal var _bindings : Array;
	mx_internal var _watchers : Array;
	mx_internal var _bindingsByDestination : Object;
	mx_internal var _bindingsBeginWithWord : Object;

include "D:/info_server/bj/WEB-INF/flex-src/view/SysAchevmentList.mxml:6,57";

}}
