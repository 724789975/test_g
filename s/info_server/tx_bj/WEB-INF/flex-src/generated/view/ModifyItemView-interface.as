
package view
{
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
import mx.containers.VBox;
import mx.controls.Button;
import mx.controls.DataGrid;
import mx.core.ClassFactory;
import mx.core.DeferredInstanceFromClass;
import mx.core.DeferredInstanceFromFunction;
import mx.core.IDeferredInstance;
import mx.core.IFactory;
import mx.core.IPropertyChangeNotifier;
import mx.core.mx_internal;
import mx.rpc.remoting.mxml.RemoteObject;
import mx.styles.*;
import mx.containers.ApplicationControlBar;
import mx.core.IFactory;
import mx.controls.dataGridClasses.DataGridColumn;
import mx.containers.VBox;
import component.MyDataGridColumn;
import mx.controls.ComboBox;

public class ModifyItemView extends mx.containers.VBox
{
	public function ModifyItemView() {}

	[Bindable]
	public var getRo : mx.rpc.remoting.mxml.RemoteObject;
	[Bindable]
	public var updateRo : mx.rpc.remoting.mxml.RemoteObject;
	[Bindable]
	public var playerItemDatagrid : mx.controls.DataGrid;
	[Bindable]
	public var modifyBtn : mx.controls.Button;
	[Bindable]
	public var saveBtn : mx.controls.Button;
	[Bindable]
	public var refreshBtn : mx.controls.Button;

	mx_internal var _bindings : Array;
	mx_internal var _watchers : Array;
	mx_internal var _bindingsByDestination : Object;
	mx_internal var _bindingsBeginWithWord : Object;

include "D:/info_server/bj/WEB-INF/flex-src/view/ModifyItemView.mxml:4,119";

}}
