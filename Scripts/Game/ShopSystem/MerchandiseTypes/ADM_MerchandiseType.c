class ADM_MerchandiseType: ScriptAndConfig
{
	[Attribute(defvalue: "", desc: "Prefab to sell", uiwidget: UIWidgets.ResourceNamePicker, params: "et")]
	protected ResourceName m_Prefab;
	protected ref Resource m_PrefabResource;
	protected bool m_CanPurchaseMultiple = true;
	
	ResourceName GetPrefab() { return m_Prefab; }
	Resource GetPrefabResource() { return m_PrefabResource; }
	void SetPrefabResource(Resource res) { m_PrefabResource = res; }
	bool CanPurchaseMultiple() { return m_CanPurchaseMultiple; }
	
	bool CanDeliver(IEntity player, ADM_ShopBaseComponent shop, int quantity = 1) { return false; }
	bool CanRespawn(ADM_ShopBaseComponent shop, int quantity = 1) { return false; }
	bool Deliver(IEntity player, ADM_ShopBaseComponent shop, int quantity = 1) { return false; }
}